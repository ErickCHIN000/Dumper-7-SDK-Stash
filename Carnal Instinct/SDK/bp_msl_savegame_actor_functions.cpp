#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_msl_savegame_actor.bp_msl_savegame_actor_C
// (Actor)

class UClass* Abp_msl_savegame_actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_msl_savegame_actor_C");

	return Clss;
}


// bp_msl_savegame_actor_C bp_msl_savegame_actor.Default__bp_msl_savegame_actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_msl_savegame_actor_C* Abp_msl_savegame_actor_C::GetDefaultObj()
{
	static class Abp_msl_savegame_actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_msl_savegame_actor_C*>(Abp_msl_savegame_actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.save_qstn_var
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Root_level_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Key_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Var_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_savegame           Var_info                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Is_instanced                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Current_level                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_key_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_root_index                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_instance                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_var                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_key                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          Temp_struct_Variable                                             (ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_save_var_01_root         Temp_struct_Variable_1                                           (ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_is_valid_root                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_key                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_var                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_var_data_found_root_index                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_key_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_var_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_get_saved_var_data_found_var_list                       (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            CallFunc_get_saved_var_data_found_var_info                       (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_found_var_instanced                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Save_qstn_var(class FName Root_level_id, class FName Key_id, class FName Var_id, struct FS_quest_savegame& Var_info, bool Is_instanced, bool Current_level, int32 Local_key_index, int32 Local_root_index, class FName Local_level, bool Local_instance, class FName Local_var, class FName Local_key, class FName CallFunc_get_current_level_id_level_id, const struct FS_save_var_05_key& Temp_struct_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, const struct FS_save_var_01_root& Temp_struct_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "save_qstn_var");

	Params::Abp_msl_savegame_actor_C_Save_qstn_var_Params Parms{};

	Parms.Root_level_id = Root_level_id;
	Parms.Key_id = Key_id;
	Parms.Var_id = Var_id;
	Parms.Var_info = Var_info;
	Parms.Is_instanced = Is_instanced;
	Parms.Current_level = Current_level;
	Parms.Local_key_index = Local_key_index;
	Parms.Local_root_index = Local_root_index;
	Parms.Local_level = Local_level;
	Parms.Local_instance = Local_instance;
	Parms.Local_var = Local_var;
	Parms.Local_key = Local_key;
	Parms.CallFunc_get_current_level_id_level_id = CallFunc_get_current_level_id_level_id;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_get_saved_var_data_is_valid_root = CallFunc_get_saved_var_data_is_valid_root;
	Parms.CallFunc_get_saved_var_data_is_valid_key = CallFunc_get_saved_var_data_is_valid_key;
	Parms.CallFunc_get_saved_var_data_is_valid_var = CallFunc_get_saved_var_data_is_valid_var;
	Parms.CallFunc_get_saved_var_data_found_root_index = CallFunc_get_saved_var_data_found_root_index;
	Parms.CallFunc_get_saved_var_data_found_key_index = CallFunc_get_saved_var_data_found_key_index;
	Parms.CallFunc_get_saved_var_data_found_var_index = CallFunc_get_saved_var_data_found_var_index;
	Parms.CallFunc_get_saved_var_data_found_var_list = CallFunc_get_saved_var_data_found_var_list;
	Parms.CallFunc_get_saved_var_data_found_var_info = CallFunc_get_saved_var_data_found_var_info;
	Parms.CallFunc_get_saved_var_data_found_var_instanced = CallFunc_get_saved_var_data_found_var_instanced;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.save_dlgn_var
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Root_level_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Key_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Var_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_savegame             Var_info                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Is_instanced                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Current_level                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_key_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_root_index                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_instance                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_var                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_key                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          Temp_struct_Variable                                             (ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_save_var_01_root         Temp_struct_Variable_1                                           (ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_is_valid_root                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_key                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_var                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_var_data_found_root_index                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_key_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_var_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_get_saved_var_data_found_var_list                       (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            CallFunc_get_saved_var_data_found_var_info                       (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_found_var_instanced                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Save_dlgn_var(class FName Root_level_id, class FName Key_id, class FName Var_id, struct FS_dlg_savegame& Var_info, bool Is_instanced, bool Current_level, int32 Local_key_index, int32 Local_root_index, class FName Local_level, bool Local_instance, class FName Local_var, class FName Local_key, class FName CallFunc_get_current_level_id_level_id, const struct FS_save_var_05_key& Temp_struct_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, const struct FS_save_var_01_root& Temp_struct_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "save_dlgn_var");

	Params::Abp_msl_savegame_actor_C_Save_dlgn_var_Params Parms{};

	Parms.Root_level_id = Root_level_id;
	Parms.Key_id = Key_id;
	Parms.Var_id = Var_id;
	Parms.Var_info = Var_info;
	Parms.Is_instanced = Is_instanced;
	Parms.Current_level = Current_level;
	Parms.Local_key_index = Local_key_index;
	Parms.Local_root_index = Local_root_index;
	Parms.Local_level = Local_level;
	Parms.Local_instance = Local_instance;
	Parms.Local_var = Local_var;
	Parms.Local_key = Local_key;
	Parms.CallFunc_get_current_level_id_level_id = CallFunc_get_current_level_id_level_id;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_get_saved_var_data_is_valid_root = CallFunc_get_saved_var_data_is_valid_root;
	Parms.CallFunc_get_saved_var_data_is_valid_key = CallFunc_get_saved_var_data_is_valid_key;
	Parms.CallFunc_get_saved_var_data_is_valid_var = CallFunc_get_saved_var_data_is_valid_var;
	Parms.CallFunc_get_saved_var_data_found_root_index = CallFunc_get_saved_var_data_found_root_index;
	Parms.CallFunc_get_saved_var_data_found_key_index = CallFunc_get_saved_var_data_found_key_index;
	Parms.CallFunc_get_saved_var_data_found_var_index = CallFunc_get_saved_var_data_found_var_index;
	Parms.CallFunc_get_saved_var_data_found_var_list = CallFunc_get_saved_var_data_found_var_list;
	Parms.CallFunc_get_saved_var_data_found_var_info = CallFunc_get_saved_var_data_found_var_info;
	Parms.CallFunc_get_saved_var_data_found_var_instanced = CallFunc_get_saved_var_data_found_var_instanced;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.remove_saved_actor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Root_level_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Actor_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Remove_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Current_level                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Remove_all                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Local_loop                                                       (Edit, BlueprintVisible)
// class FName                        Local_remove_info                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_remove_all                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_current_level                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_get_saved_actor_data_is_valid_root                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_actor_data_is_valid_actor                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_actor_data_found_root_index                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_actor_data_found_actor_index                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_actor_01_root       CallFunc_get_saved_actor_data_actor_list                         (HasGetValueTypeHash)
// struct FS_save_actor_04_data       CallFunc_get_saved_actor_data_actor_info                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_actor_data_is_valid_root_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_actor_data_is_valid_actor_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_actor_data_found_root_index_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_actor_data_found_actor_index_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_actor_01_root       CallFunc_get_saved_actor_data_actor_list_1                       (HasGetValueTypeHash)
// struct FS_save_actor_04_data       CallFunc_get_saved_actor_data_actor_info_1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_actor_data_is_valid_root_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_actor_data_is_valid_actor_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_actor_data_found_root_index_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_actor_data_found_actor_index_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_actor_01_root       CallFunc_get_saved_actor_data_actor_list_2                       (HasGetValueTypeHash)
// struct FS_save_actor_04_data       CallFunc_get_saved_actor_data_actor_info_2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Remove_saved_actor(class FName Root_level_id, class FName Actor_id, class FName Remove_info, bool Current_level, bool Remove_all, class FName Local_level, const TArray<class FName>& Local_loop, class FName Local_remove_info, bool Local_remove_all, bool Local_current_level, class FName Local_actor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_get_saved_actor_data_is_valid_root, bool CallFunc_get_saved_actor_data_is_valid_actor, int32 CallFunc_get_saved_actor_data_found_root_index, int32 CallFunc_get_saved_actor_data_found_actor_index, const struct FS_save_actor_01_root& CallFunc_get_saved_actor_data_actor_list, const struct FS_save_actor_04_data& CallFunc_get_saved_actor_data_actor_info, class FName CallFunc_get_current_level_id_level_id, TArray<class FName>& K2Node_MakeArray_Array_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_get_saved_actor_data_is_valid_root_1, bool CallFunc_get_saved_actor_data_is_valid_actor_1, int32 CallFunc_get_saved_actor_data_found_root_index_1, int32 CallFunc_get_saved_actor_data_found_actor_index_1, const struct FS_save_actor_01_root& CallFunc_get_saved_actor_data_actor_list_1, const struct FS_save_actor_04_data& CallFunc_get_saved_actor_data_actor_info_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class FName CallFunc_Array_Get_Item_1, bool CallFunc_get_saved_actor_data_is_valid_root_2, bool CallFunc_get_saved_actor_data_is_valid_actor_2, int32 CallFunc_get_saved_actor_data_found_root_index_2, int32 CallFunc_get_saved_actor_data_found_actor_index_2, const struct FS_save_actor_01_root& CallFunc_get_saved_actor_data_actor_list_2, const struct FS_save_actor_04_data& CallFunc_get_saved_actor_data_actor_info_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Max_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "remove_saved_actor");

	Params::Abp_msl_savegame_actor_C_Remove_saved_actor_Params Parms{};

	Parms.Root_level_id = Root_level_id;
	Parms.Actor_id = Actor_id;
	Parms.Remove_info = Remove_info;
	Parms.Current_level = Current_level;
	Parms.Remove_all = Remove_all;
	Parms.Local_level = Local_level;
	Parms.Local_loop = Local_loop;
	Parms.Local_remove_info = Local_remove_info;
	Parms.Local_remove_all = Local_remove_all;
	Parms.Local_current_level = Local_current_level;
	Parms.Local_actor = Local_actor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_get_saved_actor_data_is_valid_root = CallFunc_get_saved_actor_data_is_valid_root;
	Parms.CallFunc_get_saved_actor_data_is_valid_actor = CallFunc_get_saved_actor_data_is_valid_actor;
	Parms.CallFunc_get_saved_actor_data_found_root_index = CallFunc_get_saved_actor_data_found_root_index;
	Parms.CallFunc_get_saved_actor_data_found_actor_index = CallFunc_get_saved_actor_data_found_actor_index;
	Parms.CallFunc_get_saved_actor_data_actor_list = CallFunc_get_saved_actor_data_actor_list;
	Parms.CallFunc_get_saved_actor_data_actor_info = CallFunc_get_saved_actor_data_actor_info;
	Parms.CallFunc_get_current_level_id_level_id = CallFunc_get_current_level_id_level_id;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_get_saved_actor_data_is_valid_root_1 = CallFunc_get_saved_actor_data_is_valid_root_1;
	Parms.CallFunc_get_saved_actor_data_is_valid_actor_1 = CallFunc_get_saved_actor_data_is_valid_actor_1;
	Parms.CallFunc_get_saved_actor_data_found_root_index_1 = CallFunc_get_saved_actor_data_found_root_index_1;
	Parms.CallFunc_get_saved_actor_data_found_actor_index_1 = CallFunc_get_saved_actor_data_found_actor_index_1;
	Parms.CallFunc_get_saved_actor_data_actor_list_1 = CallFunc_get_saved_actor_data_actor_list_1;
	Parms.CallFunc_get_saved_actor_data_actor_info_1 = CallFunc_get_saved_actor_data_actor_info_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_get_saved_actor_data_is_valid_root_2 = CallFunc_get_saved_actor_data_is_valid_root_2;
	Parms.CallFunc_get_saved_actor_data_is_valid_actor_2 = CallFunc_get_saved_actor_data_is_valid_actor_2;
	Parms.CallFunc_get_saved_actor_data_found_root_index_2 = CallFunc_get_saved_actor_data_found_root_index_2;
	Parms.CallFunc_get_saved_actor_data_found_actor_index_2 = CallFunc_get_saved_actor_data_found_actor_index_2;
	Parms.CallFunc_get_saved_actor_data_actor_list_2 = CallFunc_get_saved_actor_data_actor_list_2;
	Parms.CallFunc_get_saved_actor_data_actor_info_2 = CallFunc_get_saved_actor_data_actor_info_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.save_string_var
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Root_level_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Key_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Var_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Var_info                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Is_instanced                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Current_level                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_key_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_root_index                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_instance                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_var                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_key                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          Temp_struct_Variable                                             (ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_save_var_01_root         Temp_struct_Variable_1                                           (ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_is_valid_root                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_key                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_var                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_var_data_found_root_index                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_key_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_var_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_get_saved_var_data_found_var_list                       (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            CallFunc_get_saved_var_data_found_var_info                       (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_found_var_instanced                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Save_string_var(class FName Root_level_id, class FName Key_id, class FName Var_id, const class FString& Var_info, bool Is_instanced, bool Current_level, int32 Local_key_index, int32 Local_root_index, class FName Local_level, bool Local_instance, class FName Local_var, class FName Local_key, class FName CallFunc_get_current_level_id_level_id, const struct FS_save_var_05_key& Temp_struct_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, const struct FS_save_var_01_root& Temp_struct_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "save_string_var");

	Params::Abp_msl_savegame_actor_C_Save_string_var_Params Parms{};

	Parms.Root_level_id = Root_level_id;
	Parms.Key_id = Key_id;
	Parms.Var_id = Var_id;
	Parms.Var_info = Var_info;
	Parms.Is_instanced = Is_instanced;
	Parms.Current_level = Current_level;
	Parms.Local_key_index = Local_key_index;
	Parms.Local_root_index = Local_root_index;
	Parms.Local_level = Local_level;
	Parms.Local_instance = Local_instance;
	Parms.Local_var = Local_var;
	Parms.Local_key = Local_key;
	Parms.CallFunc_get_current_level_id_level_id = CallFunc_get_current_level_id_level_id;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_get_saved_var_data_is_valid_root = CallFunc_get_saved_var_data_is_valid_root;
	Parms.CallFunc_get_saved_var_data_is_valid_key = CallFunc_get_saved_var_data_is_valid_key;
	Parms.CallFunc_get_saved_var_data_is_valid_var = CallFunc_get_saved_var_data_is_valid_var;
	Parms.CallFunc_get_saved_var_data_found_root_index = CallFunc_get_saved_var_data_found_root_index;
	Parms.CallFunc_get_saved_var_data_found_key_index = CallFunc_get_saved_var_data_found_key_index;
	Parms.CallFunc_get_saved_var_data_found_var_index = CallFunc_get_saved_var_data_found_var_index;
	Parms.CallFunc_get_saved_var_data_found_var_list = CallFunc_get_saved_var_data_found_var_list;
	Parms.CallFunc_get_saved_var_data_found_var_info = CallFunc_get_saved_var_data_found_var_info;
	Parms.CallFunc_get_saved_var_data_found_var_instanced = CallFunc_get_saved_var_data_found_var_instanced;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.get_save_list
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return_only_auto_saves                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Return_with_auto_saves                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Sorted_by_date                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Saved_slots                                                      (Parm, OutParm)
// TArray<class FString>              Empty_slots                                                      (Parm, OutParm)
// bool                               Is_save_exist                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_max                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Local_sorted_saves                                               (Edit, BlueprintVisible)
// int32                              Local_max_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   Local_max                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Local_reversed_array                                             (Edit, BlueprintVisible)
// bool                               Local_is_max                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDateTime>           Local_dates                                                      (Edit, BlueprintVisible)
// TArray<class FString>              Local_saves                                                      (Edit, BlueprintVisible)
// TArray<class FString>              CallFunc_get_save_list_sorted_by_date_sorted_saves               (ReferenceParm)
// TArray<class FString>              CallFunc_get_save_list_sorted_by_date_empty_slots                (ReferenceParm)
// bool                               CallFunc_get_save_list_sorted_by_date_is_save_exist              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_save_list_sorted_by_date_is_max                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_get_save_list_unsorted_saved_slots                      (ReferenceParm)
// TArray<class FString>              CallFunc_get_save_list_unsorted_empty_slots                      (ReferenceParm)
// bool                               CallFunc_get_save_list_unsorted_is_save_exist                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_save_list_unsorted_is_max                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Get_save_list(bool Return_only_auto_saves, bool Return_with_auto_saves, bool Sorted_by_date, TArray<class FString>* Saved_slots, TArray<class FString>* Empty_slots, bool* Is_save_exist, bool* Is_max, const TArray<class FString>& Local_sorted_saves, int32 Local_max_index, const struct FDateTime& Local_max, const TArray<class FString>& Local_reversed_array, bool Local_is_max, int32 Local_index, const TArray<struct FDateTime>& Local_dates, const TArray<class FString>& Local_saves, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_sorted_saves, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_empty_slots, bool CallFunc_get_save_list_sorted_by_date_is_save_exist, bool CallFunc_get_save_list_sorted_by_date_is_max, TArray<class FString>& CallFunc_get_save_list_unsorted_saved_slots, TArray<class FString>& CallFunc_get_save_list_unsorted_empty_slots, bool CallFunc_get_save_list_unsorted_is_save_exist, bool CallFunc_get_save_list_unsorted_is_max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "get_save_list");

	Params::Abp_msl_savegame_actor_C_Get_save_list_Params Parms{};

	Parms.Return_only_auto_saves = Return_only_auto_saves;
	Parms.Return_with_auto_saves = Return_with_auto_saves;
	Parms.Sorted_by_date = Sorted_by_date;
	Parms.Local_sorted_saves = Local_sorted_saves;
	Parms.Local_max_index = Local_max_index;
	Parms.Local_max = Local_max;
	Parms.Local_reversed_array = Local_reversed_array;
	Parms.Local_is_max = Local_is_max;
	Parms.Local_index = Local_index;
	Parms.Local_dates = Local_dates;
	Parms.Local_saves = Local_saves;
	Parms.CallFunc_get_save_list_sorted_by_date_sorted_saves = CallFunc_get_save_list_sorted_by_date_sorted_saves;
	Parms.CallFunc_get_save_list_sorted_by_date_empty_slots = CallFunc_get_save_list_sorted_by_date_empty_slots;
	Parms.CallFunc_get_save_list_sorted_by_date_is_save_exist = CallFunc_get_save_list_sorted_by_date_is_save_exist;
	Parms.CallFunc_get_save_list_sorted_by_date_is_max = CallFunc_get_save_list_sorted_by_date_is_max;
	Parms.CallFunc_get_save_list_unsorted_saved_slots = CallFunc_get_save_list_unsorted_saved_slots;
	Parms.CallFunc_get_save_list_unsorted_empty_slots = CallFunc_get_save_list_unsorted_empty_slots;
	Parms.CallFunc_get_save_list_unsorted_is_save_exist = CallFunc_get_save_list_unsorted_is_save_exist;
	Parms.CallFunc_get_save_list_unsorted_is_max = CallFunc_get_save_list_unsorted_is_max;

	UObject::ProcessEvent(Func, &Parms);

	if (Saved_slots != nullptr)
		*Saved_slots = std::move(Parms.Saved_slots);

	if (Empty_slots != nullptr)
		*Empty_slots = std::move(Parms.Empty_slots);

	if (Is_save_exist != nullptr)
		*Is_save_exist = Parms.Is_save_exist;

	if (Is_max != nullptr)
		*Is_max = Parms.Is_max;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.clear_instance_var
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_01_root         CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Clear_instance_var(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FS_save_var_01_root& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const struct FS_save_var_05_key& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, class FName CallFunc_Array_Get_Item_4, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_Max_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class FName CallFunc_Array_Get_Item_5, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Max_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "clear_instance_var");

	Params::Abp_msl_savegame_actor_C_Clear_instance_var_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_Max_ReturnValue_2 = CallFunc_Max_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.remove_saved_var
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Root_level_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Key_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Var_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Remove_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove_all                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Current_level                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_remove_info                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Local_loop                                                       (Edit, BlueprintVisible)
// bool                               Local_remove_all                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_var_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_var                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_key                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_is_valid_root                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_key                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_var                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_var_data_found_root_index                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_key_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_var_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_get_saved_var_data_found_var_list                       (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            CallFunc_get_saved_var_data_found_var_info                       (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_found_var_instanced                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_root_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_key_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_var_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_var_data_found_root_index_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_key_index_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_var_index_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_get_saved_var_data_found_var_list_1                     (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            CallFunc_get_saved_var_data_found_var_info_1                     (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_found_var_instanced_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_is_valid_root_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_key_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_var_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_var_data_found_root_index_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_key_index_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_var_index_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_get_saved_var_data_found_var_list_2                     (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            CallFunc_get_saved_var_data_found_var_info_2                     (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_found_var_instanced_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_is_valid_root_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_key_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_var_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_var_data_found_root_index_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_key_index_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_var_index_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_get_saved_var_data_found_var_list_3                     (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            CallFunc_get_saved_var_data_found_var_info_3                     (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_found_var_instanced_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_is_valid_root_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_key_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_var_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_var_data_found_root_index_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_key_index_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_var_index_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_get_saved_var_data_found_var_list_4                     (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            CallFunc_get_saved_var_data_found_var_info_4                     (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_found_var_instanced_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Remove_saved_var(class FName Root_level_id, class FName Key_id, class FName Var_id, class FName Remove_info, bool Remove_all, bool Current_level, class FName Local_level, class FName Local_remove_info, const TArray<class FName>& Local_loop, bool Local_remove_all, int32 Local_var_index, class FName Local_var, class FName Local_key, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_get_current_level_id_level_id, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_get_saved_var_data_is_valid_root_1, bool CallFunc_get_saved_var_data_is_valid_key_1, bool CallFunc_get_saved_var_data_is_valid_var_1, int32 CallFunc_get_saved_var_data_found_root_index_1, int32 CallFunc_get_saved_var_data_found_key_index_1, int32 CallFunc_get_saved_var_data_found_var_index_1, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list_1, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info_1, bool CallFunc_get_saved_var_data_found_var_instanced_1, TArray<class FName>& K2Node_MakeArray_Array_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array_2, class FName CallFunc_Array_Get_Item_1, bool CallFunc_get_saved_var_data_is_valid_root_2, bool CallFunc_get_saved_var_data_is_valid_key_2, bool CallFunc_get_saved_var_data_is_valid_var_2, int32 CallFunc_get_saved_var_data_found_root_index_2, int32 CallFunc_get_saved_var_data_found_key_index_2, int32 CallFunc_get_saved_var_data_found_var_index_2, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list_2, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info_2, bool CallFunc_get_saved_var_data_found_var_instanced_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue_1, class FName CallFunc_Array_Get_Item_2, bool CallFunc_get_saved_var_data_is_valid_root_3, bool CallFunc_get_saved_var_data_is_valid_key_3, bool CallFunc_get_saved_var_data_is_valid_var_3, int32 CallFunc_get_saved_var_data_found_root_index_3, int32 CallFunc_get_saved_var_data_found_key_index_3, int32 CallFunc_get_saved_var_data_found_var_index_3, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list_3, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info_3, bool CallFunc_get_saved_var_data_found_var_instanced_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Max_ReturnValue_2, bool CallFunc_get_saved_var_data_is_valid_root_4, bool CallFunc_get_saved_var_data_is_valid_key_4, bool CallFunc_get_saved_var_data_is_valid_var_4, int32 CallFunc_get_saved_var_data_found_root_index_4, int32 CallFunc_get_saved_var_data_found_key_index_4, int32 CallFunc_get_saved_var_data_found_var_index_4, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list_4, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info_4, bool CallFunc_get_saved_var_data_found_var_instanced_4, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "remove_saved_var");

	Params::Abp_msl_savegame_actor_C_Remove_saved_var_Params Parms{};

	Parms.Root_level_id = Root_level_id;
	Parms.Key_id = Key_id;
	Parms.Var_id = Var_id;
	Parms.Remove_info = Remove_info;
	Parms.Remove_all = Remove_all;
	Parms.Current_level = Current_level;
	Parms.Local_level = Local_level;
	Parms.Local_remove_info = Local_remove_info;
	Parms.Local_loop = Local_loop;
	Parms.Local_remove_all = Local_remove_all;
	Parms.Local_var_index = Local_var_index;
	Parms.Local_var = Local_var;
	Parms.Local_key = Local_key;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_get_current_level_id_level_id = CallFunc_get_current_level_id_level_id;
	Parms.CallFunc_get_saved_var_data_is_valid_root = CallFunc_get_saved_var_data_is_valid_root;
	Parms.CallFunc_get_saved_var_data_is_valid_key = CallFunc_get_saved_var_data_is_valid_key;
	Parms.CallFunc_get_saved_var_data_is_valid_var = CallFunc_get_saved_var_data_is_valid_var;
	Parms.CallFunc_get_saved_var_data_found_root_index = CallFunc_get_saved_var_data_found_root_index;
	Parms.CallFunc_get_saved_var_data_found_key_index = CallFunc_get_saved_var_data_found_key_index;
	Parms.CallFunc_get_saved_var_data_found_var_index = CallFunc_get_saved_var_data_found_var_index;
	Parms.CallFunc_get_saved_var_data_found_var_list = CallFunc_get_saved_var_data_found_var_list;
	Parms.CallFunc_get_saved_var_data_found_var_info = CallFunc_get_saved_var_data_found_var_info;
	Parms.CallFunc_get_saved_var_data_found_var_instanced = CallFunc_get_saved_var_data_found_var_instanced;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_get_saved_var_data_is_valid_root_1 = CallFunc_get_saved_var_data_is_valid_root_1;
	Parms.CallFunc_get_saved_var_data_is_valid_key_1 = CallFunc_get_saved_var_data_is_valid_key_1;
	Parms.CallFunc_get_saved_var_data_is_valid_var_1 = CallFunc_get_saved_var_data_is_valid_var_1;
	Parms.CallFunc_get_saved_var_data_found_root_index_1 = CallFunc_get_saved_var_data_found_root_index_1;
	Parms.CallFunc_get_saved_var_data_found_key_index_1 = CallFunc_get_saved_var_data_found_key_index_1;
	Parms.CallFunc_get_saved_var_data_found_var_index_1 = CallFunc_get_saved_var_data_found_var_index_1;
	Parms.CallFunc_get_saved_var_data_found_var_list_1 = CallFunc_get_saved_var_data_found_var_list_1;
	Parms.CallFunc_get_saved_var_data_found_var_info_1 = CallFunc_get_saved_var_data_found_var_info_1;
	Parms.CallFunc_get_saved_var_data_found_var_instanced_1 = CallFunc_get_saved_var_data_found_var_instanced_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_get_saved_var_data_is_valid_root_2 = CallFunc_get_saved_var_data_is_valid_root_2;
	Parms.CallFunc_get_saved_var_data_is_valid_key_2 = CallFunc_get_saved_var_data_is_valid_key_2;
	Parms.CallFunc_get_saved_var_data_is_valid_var_2 = CallFunc_get_saved_var_data_is_valid_var_2;
	Parms.CallFunc_get_saved_var_data_found_root_index_2 = CallFunc_get_saved_var_data_found_root_index_2;
	Parms.CallFunc_get_saved_var_data_found_key_index_2 = CallFunc_get_saved_var_data_found_key_index_2;
	Parms.CallFunc_get_saved_var_data_found_var_index_2 = CallFunc_get_saved_var_data_found_var_index_2;
	Parms.CallFunc_get_saved_var_data_found_var_list_2 = CallFunc_get_saved_var_data_found_var_list_2;
	Parms.CallFunc_get_saved_var_data_found_var_info_2 = CallFunc_get_saved_var_data_found_var_info_2;
	Parms.CallFunc_get_saved_var_data_found_var_instanced_2 = CallFunc_get_saved_var_data_found_var_instanced_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_get_saved_var_data_is_valid_root_3 = CallFunc_get_saved_var_data_is_valid_root_3;
	Parms.CallFunc_get_saved_var_data_is_valid_key_3 = CallFunc_get_saved_var_data_is_valid_key_3;
	Parms.CallFunc_get_saved_var_data_is_valid_var_3 = CallFunc_get_saved_var_data_is_valid_var_3;
	Parms.CallFunc_get_saved_var_data_found_root_index_3 = CallFunc_get_saved_var_data_found_root_index_3;
	Parms.CallFunc_get_saved_var_data_found_key_index_3 = CallFunc_get_saved_var_data_found_key_index_3;
	Parms.CallFunc_get_saved_var_data_found_var_index_3 = CallFunc_get_saved_var_data_found_var_index_3;
	Parms.CallFunc_get_saved_var_data_found_var_list_3 = CallFunc_get_saved_var_data_found_var_list_3;
	Parms.CallFunc_get_saved_var_data_found_var_info_3 = CallFunc_get_saved_var_data_found_var_info_3;
	Parms.CallFunc_get_saved_var_data_found_var_instanced_3 = CallFunc_get_saved_var_data_found_var_instanced_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_Max_ReturnValue_2 = CallFunc_Max_ReturnValue_2;
	Parms.CallFunc_get_saved_var_data_is_valid_root_4 = CallFunc_get_saved_var_data_is_valid_root_4;
	Parms.CallFunc_get_saved_var_data_is_valid_key_4 = CallFunc_get_saved_var_data_is_valid_key_4;
	Parms.CallFunc_get_saved_var_data_is_valid_var_4 = CallFunc_get_saved_var_data_is_valid_var_4;
	Parms.CallFunc_get_saved_var_data_found_root_index_4 = CallFunc_get_saved_var_data_found_root_index_4;
	Parms.CallFunc_get_saved_var_data_found_key_index_4 = CallFunc_get_saved_var_data_found_key_index_4;
	Parms.CallFunc_get_saved_var_data_found_var_index_4 = CallFunc_get_saved_var_data_found_var_index_4;
	Parms.CallFunc_get_saved_var_data_found_var_list_4 = CallFunc_get_saved_var_data_found_var_list_4;
	Parms.CallFunc_get_saved_var_data_found_var_info_4 = CallFunc_get_saved_var_data_found_var_info_4;
	Parms.CallFunc_get_saved_var_data_found_var_instanced_4 = CallFunc_get_saved_var_data_found_var_instanced_4;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_3 = CallFunc_Array_IsValidIndex_ReturnValue_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_4 = CallFunc_Array_IsValidIndex_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.get_current_level_id
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Level_id                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToLower_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Get_current_level_id(class FName* Level_id, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const class FString& CallFunc_ToLower_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "get_current_level_id");

	Params::Abp_msl_savegame_actor_C_Get_current_level_id_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_ToLower_ReturnValue = CallFunc_ToLower_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Level_id != nullptr)
		*Level_id = Parms.Level_id;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.load_object
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMsl_object_game_save_C*     AsObject_Game_Save                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsl_object_game_save_C*     K2Node_DynamicCast_AsMsl_Object_Game_Save                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Load_object(const class FString& SlotName, class UMsl_object_game_save_C** AsObject_Game_Save, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UMsl_object_game_save_C* K2Node_DynamicCast_AsMsl_Object_Game_Save, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "load_object");

	Params::Abp_msl_savegame_actor_C_Load_object_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsMsl_Object_Game_Save = K2Node_DynamicCast_AsMsl_Object_Game_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsObject_Game_Save != nullptr)
		*AsObject_Game_Save = Parms.AsObject_Game_Save;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.get_saved_actor_data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Current_level                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Root_level_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Actor_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid_root                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_valid_actor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_root_index                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Found_actor_index                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_actor_01_root       Actor_list                                                       (Parm, OutParm, HasGetValueTypeHash)
// struct FS_save_actor_04_data       Actor_info                                                       (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_tree_index                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_root_index                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_save_actor_01_root       CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_actor_04_data       CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Get_saved_actor_data(bool Current_level, class FName Root_level_id, class FName Actor_id, bool* Is_valid_root, bool* Is_valid_actor, int32* Found_root_index, int32* Found_actor_index, struct FS_save_actor_01_root* Actor_list, struct FS_save_actor_04_data* Actor_info, int32 Local_tree_index, int32 Local_root_index, class FName Local_level, class FName CallFunc_get_current_level_id_level_id, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_save_actor_01_root& CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, const struct FS_save_actor_04_data& CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "get_saved_actor_data");

	Params::Abp_msl_savegame_actor_C_Get_saved_actor_data_Params Parms{};

	Parms.Current_level = Current_level;
	Parms.Root_level_id = Root_level_id;
	Parms.Actor_id = Actor_id;
	Parms.Local_tree_index = Local_tree_index;
	Parms.Local_root_index = Local_root_index;
	Parms.Local_level = Local_level;
	Parms.CallFunc_get_current_level_id_level_id = CallFunc_get_current_level_id_level_id;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid_root != nullptr)
		*Is_valid_root = Parms.Is_valid_root;

	if (Is_valid_actor != nullptr)
		*Is_valid_actor = Parms.Is_valid_actor;

	if (Found_root_index != nullptr)
		*Found_root_index = Parms.Found_root_index;

	if (Found_actor_index != nullptr)
		*Found_actor_index = Parms.Found_actor_index;

	if (Actor_list != nullptr)
		*Actor_list = std::move(Parms.Actor_list);

	if (Actor_info != nullptr)
		*Actor_info = std::move(Parms.Actor_info);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.call_begingame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_save_file                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_save_file                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*Local_identifier                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Call_begingame(bool Is_save_file, bool Local_save_file, class Ubp_msl_identifier_component_C* Local_identifier, class AActor* Local_actor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class Ubp_msl_identifier_component_C* CallFunc_GetComponentByClass_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "call_begingame");

	Params::Abp_msl_savegame_actor_C_Call_begingame_Params Parms{};

	Parms.Is_save_file = Is_save_file;
	Parms.Local_save_file = Local_save_file;
	Parms.Local_identifier = Local_identifier;
	Parms.Local_actor = Local_actor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.get_saved_var_data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Root_level_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Key_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Var_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Current_level                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_valid_root                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_valid_key                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_valid_var                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_root_index                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Found_key_index                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Found_var_index                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          Found_var_list                                                   (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            Found_var_info                                                   (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Found_var_instanced                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_instance                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_root_index                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_var_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_key_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_save_var_01_root         CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Get_saved_var_data(class FName Root_level_id, class FName Key_id, class FName Var_id, bool Current_level, bool* Is_valid_root, bool* Is_valid_key, bool* Is_valid_var, int32* Found_root_index, int32* Found_key_index, int32* Found_var_index, struct FS_save_var_05_key* Found_var_list, struct FS_save_var_data* Found_var_info, bool* Found_var_instanced, bool Local_instance, class FName Local_level, int32 Local_root_index, int32 Local_var_index, int32 Local_key_index, class FName CallFunc_get_current_level_id_level_id, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, const struct FS_save_var_01_root& CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, const struct FS_save_var_05_key& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Find_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "get_saved_var_data");

	Params::Abp_msl_savegame_actor_C_Get_saved_var_data_Params Parms{};

	Parms.Root_level_id = Root_level_id;
	Parms.Key_id = Key_id;
	Parms.Var_id = Var_id;
	Parms.Current_level = Current_level;
	Parms.Local_instance = Local_instance;
	Parms.Local_level = Local_level;
	Parms.Local_root_index = Local_root_index;
	Parms.Local_var_index = Local_var_index;
	Parms.Local_key_index = Local_key_index;
	Parms.CallFunc_get_current_level_id_level_id = CallFunc_get_current_level_id_level_id;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Find_ReturnValue_2 = CallFunc_Array_Find_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid_root != nullptr)
		*Is_valid_root = Parms.Is_valid_root;

	if (Is_valid_key != nullptr)
		*Is_valid_key = Parms.Is_valid_key;

	if (Is_valid_var != nullptr)
		*Is_valid_var = Parms.Is_valid_var;

	if (Found_root_index != nullptr)
		*Found_root_index = Parms.Found_root_index;

	if (Found_key_index != nullptr)
		*Found_key_index = Parms.Found_key_index;

	if (Found_var_index != nullptr)
		*Found_var_index = Parms.Found_var_index;

	if (Found_var_list != nullptr)
		*Found_var_list = std::move(Parms.Found_var_list);

	if (Found_var_info != nullptr)
		*Found_var_info = std::move(Parms.Found_var_info);

	if (Found_var_instanced != nullptr)
		*Found_var_instanced = Parms.Found_var_instanced;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.save_actor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Root_level_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Actor_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor_reference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Current_level                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Enable_spawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_root_index                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_actor_04_data       Local_data                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_current                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_spawn                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*Local_identifier                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_actor_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_actor_01_root       Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_actor_data_is_valid_root                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_actor_data_is_valid_actor                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_actor_data_found_root_index                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_actor_data_found_actor_index                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_actor_01_root       CallFunc_get_saved_actor_data_actor_list                         (HasGetValueTypeHash)
// struct FS_save_actor_04_data       CallFunc_get_saved_actor_data_actor_info                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Save_actor(class FName Root_level_id, class FName Actor_id, class AActor* Actor_reference, bool Current_level, bool Enable_spawn, int32 Local_root_index, const struct FS_save_actor_04_data& Local_data, class FName Local_level, bool Local_current, bool Local_spawn, class Ubp_msl_identifier_component_C* Local_identifier, class FName Local_actor_id, class AActor* Local_actor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FS_save_actor_01_root& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_get_saved_actor_data_is_valid_root, bool CallFunc_get_saved_actor_data_is_valid_actor, int32 CallFunc_get_saved_actor_data_found_root_index, int32 CallFunc_get_saved_actor_data_found_actor_index, const struct FS_save_actor_01_root& CallFunc_get_saved_actor_data_actor_list, const struct FS_save_actor_04_data& CallFunc_get_saved_actor_data_actor_info, class FName CallFunc_get_current_level_id_level_id, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "save_actor");

	Params::Abp_msl_savegame_actor_C_Save_actor_Params Parms{};

	Parms.Root_level_id = Root_level_id;
	Parms.Actor_id = Actor_id;
	Parms.Actor_reference = Actor_reference;
	Parms.Current_level = Current_level;
	Parms.Enable_spawn = Enable_spawn;
	Parms.Local_root_index = Local_root_index;
	Parms.Local_data = Local_data;
	Parms.Local_level = Local_level;
	Parms.Local_current = Local_current;
	Parms.Local_spawn = Local_spawn;
	Parms.Local_identifier = Local_identifier;
	Parms.Local_actor_id = Local_actor_id;
	Parms.Local_actor = Local_actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_get_saved_actor_data_is_valid_root = CallFunc_get_saved_actor_data_is_valid_root;
	Parms.CallFunc_get_saved_actor_data_is_valid_actor = CallFunc_get_saved_actor_data_is_valid_actor;
	Parms.CallFunc_get_saved_actor_data_found_root_index = CallFunc_get_saved_actor_data_found_root_index;
	Parms.CallFunc_get_saved_actor_data_found_actor_index = CallFunc_get_saved_actor_data_found_actor_index;
	Parms.CallFunc_get_saved_actor_data_actor_list = CallFunc_get_saved_actor_data_actor_list;
	Parms.CallFunc_get_saved_actor_data_actor_info = CallFunc_get_saved_actor_data_actor_info;
	Parms.CallFunc_get_current_level_id_level_id = CallFunc_get_current_level_id_level_id;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.restore_save_data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMsl_object_game_save_C*     Savegame_object                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Restore_level                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_tree                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_root                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_level_index                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsl_object_game_save_C*     Local_save_object                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_msl_identifier_component_C*Local_identifier                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Restore_save_data(class UMsl_object_game_save_C* Savegame_object, class FName Restore_level, class FName Local_tree, class FName Local_root, class FName Local_level, int32 Local_level_index, class UMsl_object_game_save_C* Local_save_object, class Ubp_msl_identifier_component_C* Local_identifier, class FName Local_id, class AActor* Local_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "restore_save_data");

	Params::Abp_msl_savegame_actor_C_Restore_save_data_Params Parms{};

	Parms.Savegame_object = Savegame_object;
	Parms.Restore_level = Restore_level;
	Parms.Local_tree = Local_tree;
	Parms.Local_root = Local_root;
	Parms.Local_level = Local_level;
	Parms.Local_level_index = Local_level_index;
	Parms.Local_save_object = Local_save_object;
	Parms.Local_identifier = Local_identifier;
	Parms.Local_id = Local_id;
	Parms.Local_actor = Local_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.collect_save_data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_actor_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_msl_identifier_component_C*Local_identifier                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_id_is_valid                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_get_id_actor_unique_id                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Collect_save_data(class FName Local_actor_id, class FName Local_id, class Ubp_msl_identifier_component_C* Local_identifier, class AActor* Local_actor, bool CallFunc_get_id_is_valid, class FName CallFunc_get_id_actor_unique_id, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class Ubp_msl_identifier_component_C* CallFunc_GetComponentByClass_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "collect_save_data");

	Params::Abp_msl_savegame_actor_C_Collect_save_data_Params Parms{};

	Parms.Local_actor_id = Local_actor_id;
	Parms.Local_id = Local_id;
	Parms.Local_identifier = Local_identifier;
	Parms.Local_actor = Local_actor;
	Parms.CallFunc_get_id_is_valid = CallFunc_get_id_is_valid;
	Parms.CallFunc_get_id_actor_unique_id = CallFunc_get_id_actor_unique_id;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.init_loadgame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_get_loading_success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_get_loading_loaded_save                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_load_data_is_success                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Init_loadgame(bool CallFunc_get_loading_success, const class FString& CallFunc_get_loading_loaded_save, bool CallFunc_load_data_is_success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "init_loadgame");

	Params::Abp_msl_savegame_actor_C_Init_loadgame_Params Parms{};

	Parms.CallFunc_get_loading_success = CallFunc_get_loading_success;
	Parms.CallFunc_get_loading_loaded_save = CallFunc_get_loading_loaded_save;
	Parms.CallFunc_load_data_is_success = CallFunc_load_data_is_success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.autosave_slot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Local_empty_slots                                                (Edit, BlueprintVisible)
// class FString                      Local_slot_name                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Local_new_slot                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_get_save_list_sorted_by_date_sorted_saves               (ReferenceParm)
// TArray<class FString>              CallFunc_get_save_list_sorted_by_date_empty_slots                (ReferenceParm)
// bool                               CallFunc_get_save_list_sorted_by_date_is_save_exist              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_save_list_sorted_by_date_is_max                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_get_save_list_unsorted_saved_slots                      (ReferenceParm)
// TArray<class FString>              CallFunc_get_save_list_unsorted_empty_slots                      (ReferenceParm)
// bool                               CallFunc_get_save_list_unsorted_is_save_exist                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_save_list_unsorted_is_max                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_delete_slot_success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_autosave_slot_success                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Autosave_slot(bool* Success, const TArray<class FString>& Local_empty_slots, const class FString& Local_slot_name, bool Local_new_slot, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_sorted_saves, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_empty_slots, bool CallFunc_get_save_list_sorted_by_date_is_save_exist, bool CallFunc_get_save_list_sorted_by_date_is_max, TArray<class FString>& CallFunc_get_save_list_unsorted_saved_slots, TArray<class FString>& CallFunc_get_save_list_unsorted_empty_slots, bool CallFunc_get_save_list_unsorted_is_save_exist, bool CallFunc_get_save_list_unsorted_is_max, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_delete_slot_success, bool CallFunc_autosave_slot_success, const class FString& CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "autosave_slot");

	Params::Abp_msl_savegame_actor_C_Autosave_slot_Params Parms{};

	Parms.Local_empty_slots = Local_empty_slots;
	Parms.Local_slot_name = Local_slot_name;
	Parms.Local_new_slot = Local_new_slot;
	Parms.CallFunc_get_save_list_sorted_by_date_sorted_saves = CallFunc_get_save_list_sorted_by_date_sorted_saves;
	Parms.CallFunc_get_save_list_sorted_by_date_empty_slots = CallFunc_get_save_list_sorted_by_date_empty_slots;
	Parms.CallFunc_get_save_list_sorted_by_date_is_save_exist = CallFunc_get_save_list_sorted_by_date_is_save_exist;
	Parms.CallFunc_get_save_list_sorted_by_date_is_max = CallFunc_get_save_list_sorted_by_date_is_max;
	Parms.CallFunc_get_save_list_unsorted_saved_slots = CallFunc_get_save_list_unsorted_saved_slots;
	Parms.CallFunc_get_save_list_unsorted_empty_slots = CallFunc_get_save_list_unsorted_empty_slots;
	Parms.CallFunc_get_save_list_unsorted_is_save_exist = CallFunc_get_save_list_unsorted_is_save_exist;
	Parms.CallFunc_get_save_list_unsorted_is_max = CallFunc_get_save_list_unsorted_is_max;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_delete_slot_success = CallFunc_delete_slot_success;
	Parms.CallFunc_autosave_slot_success = CallFunc_autosave_slot_success;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.get_loading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove_loading                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Loaded_save                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Local_remove                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Local_save                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_set_loading_success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsl_object_game_save_loader_C*K2Node_DynamicCast_AsMsl_Object_Game_Save_Loader                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Get_loading(bool Remove_loading, bool* Success, class FString* Loaded_save, bool Local_remove, const class FString& Local_save, bool CallFunc_set_loading_success, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UMsl_object_game_save_loader_C* K2Node_DynamicCast_AsMsl_Object_Game_Save_Loader, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "get_loading");

	Params::Abp_msl_savegame_actor_C_Get_loading_Params Parms{};

	Parms.Remove_loading = Remove_loading;
	Parms.Local_remove = Local_remove;
	Parms.Local_save = Local_save;
	Parms.CallFunc_set_loading_success = CallFunc_set_loading_success;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsMsl_Object_Game_Save_Loader = K2Node_DynamicCast_AsMsl_Object_Game_Save_Loader;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Loaded_save != nullptr)
		*Loaded_save = std::move(Parms.Loaded_save);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.set_loading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove_loading                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Loaded_slot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsl_object_game_save_loader_C*CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Set_loading(bool Remove_loading, const class FString& Loaded_slot, bool* Success, bool CallFunc_DeleteGameInSlot_ReturnValue, class UMsl_object_game_save_loader_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "set_loading");

	Params::Abp_msl_savegame_actor_C_Set_loading_Params Parms{};

	Parms.Remove_loading = Remove_loading;
	Parms.Loaded_slot = Loaded_slot;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue = CallFunc_DeleteGameInSlot_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.load_slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Save_slot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Local_save_slot                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_set_loading_success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_loading_success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_get_loading_loaded_save                                 (ZeroConstructor, HasGetValueTypeHash)
// class UMsl_object_game_save_C*     CallFunc_load_object_AsObject_Game_Save                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Load_slot(const class FString& Save_slot, const class FString& Local_save_slot, bool CallFunc_set_loading_success, bool CallFunc_get_loading_success, const class FString& CallFunc_get_loading_loaded_save, class UMsl_object_game_save_C* CallFunc_load_object_AsObject_Game_Save, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "load_slot");

	Params::Abp_msl_savegame_actor_C_Load_slot_Params Parms{};

	Parms.Save_slot = Save_slot;
	Parms.Local_save_slot = Local_save_slot;
	Parms.CallFunc_set_loading_success = CallFunc_set_loading_success;
	Parms.CallFunc_get_loading_success = CallFunc_get_loading_success;
	Parms.CallFunc_get_loading_loaded_save = CallFunc_get_loading_loaded_save;
	Parms.CallFunc_load_object_AsObject_Game_Save = CallFunc_load_object_AsObject_Game_Save;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.load_data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Is_success                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Local_slot_name                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Local_success                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsl_object_game_save_C*     Local_savegame                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsl_object_game_save_C*     CallFunc_load_object_AsObject_Game_Save                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Load_data(const class FString& SlotName, bool* Is_success, const class FString& Local_slot_name, bool Local_success, class UMsl_object_game_save_C* Local_savegame, class FName CallFunc_get_current_level_id_level_id, class UMsl_object_game_save_C* CallFunc_load_object_AsObject_Game_Save, class FName CallFunc_get_current_level_id_level_id_1, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "load_data");

	Params::Abp_msl_savegame_actor_C_Load_data_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.Local_slot_name = Local_slot_name;
	Parms.Local_success = Local_success;
	Parms.Local_savegame = Local_savegame;
	Parms.CallFunc_get_current_level_id_level_id = CallFunc_get_current_level_id_level_id;
	Parms.CallFunc_load_object_AsObject_Game_Save = CallFunc_load_object_AsObject_Game_Save;
	Parms.CallFunc_get_current_level_id_level_id_1 = CallFunc_get_current_level_id_level_id_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_success != nullptr)
		*Is_success = Parms.Is_success;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.get_save_list_sorted_by_date
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return_only_auto_saves                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Return_with_auto_saves                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Sorted_saves                                                     (Parm, OutParm)
// TArray<class FString>              Empty_slots                                                      (Parm, OutParm)
// bool                               Is_save_exist                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_max                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Local_empty_slots                                                (Edit, BlueprintVisible)
// TArray<class FString>              Local_sorted_saves                                               (Edit, BlueprintVisible)
// int32                              Local_max_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   Local_max                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Local_is_max                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDateTime>           Local_dates                                                      (Edit, BlueprintVisible)
// TArray<class FString>              Local_saves                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_get_save_list_unsorted_saved_slots                      (ReferenceParm)
// TArray<class FString>              CallFunc_get_save_list_unsorted_empty_slots                      (ReferenceParm)
// bool                               CallFunc_get_save_list_unsorted_is_save_exist                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_save_list_unsorted_is_max                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DateTimeDateTime_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// class UMsl_object_game_save_C*     CallFunc_load_object_AsObject_Game_Save                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Get_save_list_sorted_by_date(bool Return_only_auto_saves, bool Return_with_auto_saves, TArray<class FString>* Sorted_saves, TArray<class FString>* Empty_slots, bool* Is_save_exist, bool* Is_max, const TArray<class FString>& Local_empty_slots, const TArray<class FString>& Local_sorted_saves, int32 Local_max_index, const struct FDateTime& Local_max, bool Local_is_max, const TArray<struct FDateTime>& Local_dates, const TArray<class FString>& Local_saves, int32 Temp_int_Loop_Counter_Variable, TArray<class FString>& CallFunc_get_save_list_unsorted_saved_slots, TArray<class FString>& CallFunc_get_save_list_unsorted_empty_slots, bool CallFunc_get_save_list_unsorted_is_save_exist, bool CallFunc_get_save_list_unsorted_is_max, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FDateTime& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Greater_DateTimeDateTime_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Array_Get_Item_2, class UMsl_object_game_save_C* CallFunc_load_object_AsObject_Game_Save, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "get_save_list_sorted_by_date");

	Params::Abp_msl_savegame_actor_C_Get_save_list_sorted_by_date_Params Parms{};

	Parms.Return_only_auto_saves = Return_only_auto_saves;
	Parms.Return_with_auto_saves = Return_with_auto_saves;
	Parms.Local_empty_slots = Local_empty_slots;
	Parms.Local_sorted_saves = Local_sorted_saves;
	Parms.Local_max_index = Local_max_index;
	Parms.Local_max = Local_max;
	Parms.Local_is_max = Local_is_max;
	Parms.Local_dates = Local_dates;
	Parms.Local_saves = Local_saves;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_get_save_list_unsorted_saved_slots = CallFunc_get_save_list_unsorted_saved_slots;
	Parms.CallFunc_get_save_list_unsorted_empty_slots = CallFunc_get_save_list_unsorted_empty_slots;
	Parms.CallFunc_get_save_list_unsorted_is_save_exist = CallFunc_get_save_list_unsorted_is_save_exist;
	Parms.CallFunc_get_save_list_unsorted_is_max = CallFunc_get_save_list_unsorted_is_max;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Greater_DateTimeDateTime_ReturnValue = CallFunc_Greater_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_load_object_AsObject_Game_Save = CallFunc_load_object_AsObject_Game_Save;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Sorted_saves != nullptr)
		*Sorted_saves = std::move(Parms.Sorted_saves);

	if (Empty_slots != nullptr)
		*Empty_slots = std::move(Parms.Empty_slots);

	if (Is_save_exist != nullptr)
		*Is_save_exist = Parms.Is_save_exist;

	if (Is_max != nullptr)
		*Is_max = Parms.Is_max;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.delete_slot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove_all                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Save_slot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Local_saves                                                      (Edit, BlueprintVisible)
// class FString                      Local_save_slot                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Local_remove_all                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_get_save_list_unsorted_saved_slots                      (ReferenceParm)
// TArray<class FString>              CallFunc_get_save_list_unsorted_empty_slots                      (ReferenceParm)
// bool                               CallFunc_get_save_list_unsorted_is_save_exist                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_save_list_unsorted_is_max                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Delete_slot(bool Remove_all, const class FString& Save_slot, bool* Success, const TArray<class FString>& Local_saves, const class FString& Local_save_slot, bool Local_remove_all, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class FString>& CallFunc_get_save_list_unsorted_saved_slots, TArray<class FString>& CallFunc_get_save_list_unsorted_empty_slots, bool CallFunc_get_save_list_unsorted_is_save_exist, bool CallFunc_get_save_list_unsorted_is_max, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_DeleteGameInSlot_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "delete_slot");

	Params::Abp_msl_savegame_actor_C_Delete_slot_Params Parms{};

	Parms.Remove_all = Remove_all;
	Parms.Save_slot = Save_slot;
	Parms.Local_saves = Local_saves;
	Parms.Local_save_slot = Local_save_slot;
	Parms.Local_remove_all = Local_remove_all;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_get_save_list_unsorted_saved_slots = CallFunc_get_save_list_unsorted_saved_slots;
	Parms.CallFunc_get_save_list_unsorted_empty_slots = CallFunc_get_save_list_unsorted_empty_slots;
	Parms.CallFunc_get_save_list_unsorted_is_save_exist = CallFunc_get_save_list_unsorted_is_save_exist;
	Parms.CallFunc_get_save_list_unsorted_is_max = CallFunc_get_save_list_unsorted_is_max;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue = CallFunc_DeleteGameInSlot_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue_1 = CallFunc_DeleteGameInSlot_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.save_slot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               New_slot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Slot_name                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Local_empty_slots                                                (Edit, BlueprintVisible)
// class FString                      Local_slot_name                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Local_new_slot                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_get_save_list_unsorted_saved_slots                      (ReferenceParm)
// TArray<class FString>              CallFunc_get_save_list_unsorted_empty_slots                      (ReferenceParm)
// bool                               CallFunc_get_save_list_unsorted_is_save_exist                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_save_list_unsorted_is_max                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Save_slot(bool New_slot, const class FString& Slot_name, bool* Success, const TArray<class FString>& Local_empty_slots, const class FString& Local_slot_name, bool Local_new_slot, TArray<class FString>& CallFunc_get_save_list_unsorted_saved_slots, TArray<class FString>& CallFunc_get_save_list_unsorted_empty_slots, bool CallFunc_get_save_list_unsorted_is_save_exist, bool CallFunc_get_save_list_unsorted_is_max, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "save_slot");

	Params::Abp_msl_savegame_actor_C_Save_slot_Params Parms{};

	Parms.New_slot = New_slot;
	Parms.Slot_name = Slot_name;
	Parms.Local_empty_slots = Local_empty_slots;
	Parms.Local_slot_name = Local_slot_name;
	Parms.Local_new_slot = Local_new_slot;
	Parms.CallFunc_get_save_list_unsorted_saved_slots = CallFunc_get_save_list_unsorted_saved_slots;
	Parms.CallFunc_get_save_list_unsorted_empty_slots = CallFunc_get_save_list_unsorted_empty_slots;
	Parms.CallFunc_get_save_list_unsorted_is_save_exist = CallFunc_get_save_list_unsorted_is_save_exist;
	Parms.CallFunc_get_save_list_unsorted_is_max = CallFunc_get_save_list_unsorted_is_max;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.save_data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Save_slot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Is_autosave                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_autosave                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Local_save_slot                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UMsl_object_game_save_C*     Local_save_object                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_current_level_id_level_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMsl_object_game_save_C*     CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Save_data(const class FString& Save_slot, bool Is_autosave, bool Local_autosave, const class FString& Local_save_slot, class UMsl_object_game_save_C* Local_save_object, class FName CallFunc_get_current_level_id_level_id, const struct FDateTime& CallFunc_Now_ReturnValue, class UMsl_object_game_save_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "save_data");

	Params::Abp_msl_savegame_actor_C_Save_data_Params Parms{};

	Parms.Save_slot = Save_slot;
	Parms.Is_autosave = Is_autosave;
	Parms.Local_autosave = Local_autosave;
	Parms.Local_save_slot = Local_save_slot;
	Parms.Local_save_object = Local_save_object;
	Parms.CallFunc_get_current_level_id_level_id = CallFunc_get_current_level_id_level_id;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.get_save_list_unsorted
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Auto_saves_only                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Return_with_auto_saves                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Saved_slots                                                      (Parm, OutParm)
// TArray<class FString>              Empty_slots                                                      (Parm, OutParm)
// bool                               Is_save_exist                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_max                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_return_with_auto                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Local_name                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Local_auto_saves                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Local_saves                                                      (Edit, BlueprintVisible)
// TArray<class FString>              Local_empty                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Get_save_list_unsorted(bool Auto_saves_only, bool Return_with_auto_saves, TArray<class FString>* Saved_slots, TArray<class FString>* Empty_slots, bool* Is_save_exist, bool* Is_max, bool Local_return_with_auto, const class FString& Local_name, bool Local_auto_saves, const TArray<class FString>& Local_saves, const TArray<class FString>& Local_empty, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "get_save_list_unsorted");

	Params::Abp_msl_savegame_actor_C_Get_save_list_unsorted_Params Parms{};

	Parms.Auto_saves_only = Auto_saves_only;
	Parms.Return_with_auto_saves = Return_with_auto_saves;
	Parms.Local_return_with_auto = Local_return_with_auto;
	Parms.Local_name = Local_name;
	Parms.Local_auto_saves = Local_auto_saves;
	Parms.Local_saves = Local_saves;
	Parms.Local_empty = Local_empty;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Saved_slots != nullptr)
		*Saved_slots = std::move(Parms.Saved_slots);

	if (Empty_slots != nullptr)
		*Empty_slots = std::move(Parms.Empty_slots);

	if (Is_save_exist != nullptr)
		*Is_save_exist = Parms.Is_save_exist;

	if (Is_max != nullptr)
		*Is_max = Parms.Is_max;

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Abp_msl_savegame_actor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.call_game_loaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_msl_savegame_actor_C::Call_game_loaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "call_game_loaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.custom_override_loading
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMsl_object_game_save_C*     Object_game_save                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::Custom_override_loading(class UMsl_object_game_save_C* Object_game_save)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "custom_override_loading");

	Params::Abp_msl_savegame_actor_C_Custom_override_loading_Params Parms{};

	Parms.Object_game_save = Object_game_save;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.custom_override_saving
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Game_save_slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Is_autosave                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_savegame_actor_C::Custom_override_saving(const class FString& Game_save_slot, bool Is_autosave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "custom_override_saving");

	Params::Abp_msl_savegame_actor_C_Custom_override_saving_Params Parms{};

	Parms.Game_save_slot = Game_save_slot;
	Parms.Is_autosave = Is_autosave;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_savegame_actor.bp_msl_savegame_actor_C.ExecuteUbergraph_bp_msl_savegame_actor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_game_save_slot                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_is_autosave                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class Abp_msl_savegame_actor_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class Abp_msl_savegame_actor_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsl_object_game_save_C*     K2Node_CustomEvent_object_game_save                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_savegame_actor_C::ExecuteUbergraph_bp_msl_savegame_actor(int32 EntryPoint, const class FString& K2Node_CustomEvent_game_save_slot, bool K2Node_CustomEvent_is_autosave, TArray<class Abp_msl_savegame_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Abp_msl_savegame_actor_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_MultiGate_FirstRun, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, class UMsl_object_game_save_C* K2Node_CustomEvent_object_game_save, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_savegame_actor_C", "ExecuteUbergraph_bp_msl_savegame_actor");

	Params::Abp_msl_savegame_actor_C_ExecuteUbergraph_bp_msl_savegame_actor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_game_save_slot = K2Node_CustomEvent_game_save_slot;
	Parms.K2Node_CustomEvent_is_autosave = K2Node_CustomEvent_is_autosave;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.K2Node_CustomEvent_object_game_save = K2Node_CustomEvent_object_game_save;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


