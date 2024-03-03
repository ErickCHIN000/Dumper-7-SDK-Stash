#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_quest_actor.bp_quest_actor_C
// (Actor)

class UClass* Abp_quest_actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_quest_actor_C");

	return Clss;
}


// bp_quest_actor_C bp_quest_actor.Default__bp_quest_actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_quest_actor_C* Abp_quest_actor_C::GetDefaultObj()
{
	static class Abp_quest_actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_quest_actor_C*>(Abp_quest_actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_quest_actor.bp_quest_actor_C.get_sub_objective
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_found                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FS_quest_sub_objective_data>Loc_subob_data                                                   (Edit, BlueprintVisible)
// TArray<class FName>                Loc_subob_list                                                   (Edit, BlueprintVisible)
// struct FS_quest_sub_objective_data Local_sub_objective                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_is_valid                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_find_sub_objective_is_valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_sub_objective_data CallFunc_find_sub_objective_sub_objective_data                   (HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_actor_C::Get_sub_objective(class FName Sub_objective_id, class FName Objective_id, bool* Successful, bool Local_found, const TArray<struct FS_quest_sub_objective_data>& Loc_subob_data, const TArray<class FName>& Loc_subob_list, const struct FS_quest_sub_objective_data& Local_sub_objective, bool Local_is_valid, bool CallFunc_find_sub_objective_is_valid, const struct FS_quest_sub_objective_data& CallFunc_find_sub_objective_sub_objective_data, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_quest_sub_objective_data& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "get_sub_objective");

	Params::Abp_quest_actor_C_Get_sub_objective_Params Parms{};

	Parms.Sub_objective_id = Sub_objective_id;
	Parms.Objective_id = Objective_id;
	Parms.Local_found = Local_found;
	Parms.Loc_subob_data = Loc_subob_data;
	Parms.Loc_subob_list = Loc_subob_list;
	Parms.Local_sub_objective = Local_sub_objective;
	Parms.Local_is_valid = Local_is_valid;
	Parms.CallFunc_find_sub_objective_is_valid = CallFunc_find_sub_objective_is_valid;
	Parms.CallFunc_find_sub_objective_sub_objective_data = CallFunc_find_sub_objective_sub_objective_data;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Successful != nullptr)
		*Successful = Parms.Successful;

}


// Function bp_quest_actor.bp_quest_actor_C.remove_sub_objective
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FS_quest_sub_objective_data>Loc_subob_data                                                   (Edit, BlueprintVisible)
// TArray<class FName>                Loc_subob_list                                                   (Edit, BlueprintVisible)
// struct FS_quest_sub_objective_data Local_sub_objective                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_is_valid                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_find_sub_objective_is_valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_sub_objective_data CallFunc_find_sub_objective_sub_objective_data                   (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_objective_dynamic  K2Node_MakeStruct_s_quest_objective_dynamic                      (HasGetValueTypeHash)

void Abp_quest_actor_C::Remove_sub_objective(class FName Sub_objective_id, class FName Objective_id, bool* Successful, const TArray<struct FS_quest_sub_objective_data>& Loc_subob_data, const TArray<class FName>& Loc_subob_list, const struct FS_quest_sub_objective_data& Local_sub_objective, bool Local_is_valid, bool CallFunc_find_sub_objective_is_valid, const struct FS_quest_sub_objective_data& CallFunc_find_sub_objective_sub_objective_data, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_quest_sub_objective_data& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, const struct FS_quest_objective_dynamic& K2Node_MakeStruct_s_quest_objective_dynamic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "remove_sub_objective");

	Params::Abp_quest_actor_C_Remove_sub_objective_Params Parms{};

	Parms.Sub_objective_id = Sub_objective_id;
	Parms.Objective_id = Objective_id;
	Parms.Loc_subob_data = Loc_subob_data;
	Parms.Loc_subob_list = Loc_subob_list;
	Parms.Local_sub_objective = Local_sub_objective;
	Parms.Local_is_valid = Local_is_valid;
	Parms.CallFunc_find_sub_objective_is_valid = CallFunc_find_sub_objective_is_valid;
	Parms.CallFunc_find_sub_objective_sub_objective_data = CallFunc_find_sub_objective_sub_objective_data;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_s_quest_objective_dynamic = K2Node_MakeStruct_s_quest_objective_dynamic;

	UObject::ProcessEvent(Func, &Parms);

	if (Successful != nullptr)
		*Successful = Parms.Successful;

}


// Function bp_quest_actor.bp_quest_actor_C.add_sub_objective
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FS_quest_sub_objective_data>Loc_subob_data                                                   (Edit, BlueprintVisible)
// TArray<class FName>                Loc_subob_list                                                   (Edit, BlueprintVisible)
// struct FS_quest_sub_objective_data Local_sub_objective                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_is_valid                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_find_sub_objective_is_valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_sub_objective_data CallFunc_find_sub_objective_sub_objective_data                   (HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_layout_widget_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_objective_dynamic  K2Node_MakeStruct_s_quest_objective_dynamic                      (HasGetValueTypeHash)

void Abp_quest_actor_C::Add_sub_objective(class FName Sub_objective_id, class FName Objective_id, bool* Successful, const TArray<struct FS_quest_sub_objective_data>& Loc_subob_data, const TArray<class FName>& Loc_subob_list, const struct FS_quest_sub_objective_data& Local_sub_objective, bool Local_is_valid, bool CallFunc_find_sub_objective_is_valid, const struct FS_quest_sub_objective_data& CallFunc_find_sub_objective_sub_objective_data, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FS_quest_objective_dynamic& K2Node_MakeStruct_s_quest_objective_dynamic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "add_sub_objective");

	Params::Abp_quest_actor_C_Add_sub_objective_Params Parms{};

	Parms.Sub_objective_id = Sub_objective_id;
	Parms.Objective_id = Objective_id;
	Parms.Loc_subob_data = Loc_subob_data;
	Parms.Loc_subob_list = Loc_subob_list;
	Parms.Local_sub_objective = Local_sub_objective;
	Parms.Local_is_valid = Local_is_valid;
	Parms.CallFunc_find_sub_objective_is_valid = CallFunc_find_sub_objective_is_valid;
	Parms.CallFunc_find_sub_objective_sub_objective_data = CallFunc_find_sub_objective_sub_objective_data;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_get_layout_widget_is_valid = CallFunc_get_layout_widget_is_valid;
	Parms.CallFunc_get_layout_widget_quest_widget = CallFunc_get_layout_widget_quest_widget;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_s_quest_objective_dynamic = K2Node_MakeStruct_s_quest_objective_dynamic;

	UObject::ProcessEvent(Func, &Parms);

	if (Successful != nullptr)
		*Successful = Parms.Successful;

}


// Function bp_quest_actor.bp_quest_actor_C.Next Quest Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Quest_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_notif              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_04_notification_slot_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_next_quest_notif_actor_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_quest_actor_C::Next_Quest_Widget(class FName Quest_Name, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FS_quest_notif& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UW_04_notification_slot_C* CallFunc_Create_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, class Abp_next_quest_notif_actor_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "Next Quest Widget");

	Params::Abp_quest_actor_C_Next_Quest_Widget_Params Parms{};

	Parms.Quest_Name = Quest_Name;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.consume_event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_quest_event              Quest_event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AObject_quest_event_parent_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_quest_actor_C::Consume_event(const struct FS_quest_event& Quest_event, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AObject_quest_event_parent_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "consume_event");

	Params::Abp_quest_actor_C_Consume_event_Params Parms{};

	Parms.Quest_event = Quest_event;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.get_save_data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_quest_savegame           Quest_save                                                       (Parm, OutParm, HasGetValueTypeHash)
// struct FS_quest_savegame           K2Node_MakeStruct_s_quest_savegame                               (UObjectWrapper, HasGetValueTypeHash)

void Abp_quest_actor_C::Get_save_data(struct FS_quest_savegame* Quest_save, const struct FS_quest_savegame& K2Node_MakeStruct_s_quest_savegame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "get_save_data");

	Params::Abp_quest_actor_C_Get_save_data_Params Parms{};

	Parms.K2Node_MakeStruct_s_quest_savegame = K2Node_MakeStruct_s_quest_savegame;

	UObject::ProcessEvent(Func, &Parms);

	if (Quest_save != nullptr)
		*Quest_save = std::move(Parms.Quest_save);

}


// Function bp_quest_actor.bp_quest_actor_C.consume_active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_dlg_get_quest_component_is_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_quest_component_C*       CallFunc_dlg_get_quest_component_quest_reference                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_quest_actor_C::Consume_active(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_dlg_get_quest_component_is_valid, class Ubp_quest_component_C* CallFunc_dlg_get_quest_component_quest_reference, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "consume_active");

	Params::Abp_quest_actor_C_Consume_active_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_dlg_get_quest_component_is_valid = CallFunc_dlg_get_quest_component_is_valid;
	Parms.CallFunc_dlg_get_quest_component_quest_reference = CallFunc_dlg_get_quest_component_quest_reference;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.consume_finish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_dlg_get_quest_component_is_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_quest_component_C*       CallFunc_dlg_get_quest_component_quest_reference                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_quest_actor_C::Consume_finish(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_dlg_get_quest_component_is_valid, class Ubp_quest_component_C* CallFunc_dlg_get_quest_component_quest_reference, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "consume_finish");

	Params::Abp_quest_actor_C_Consume_finish_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_dlg_get_quest_component_is_valid = CallFunc_dlg_get_quest_component_is_valid;
	Parms.CallFunc_dlg_get_quest_component_quest_reference = CallFunc_dlg_get_quest_component_quest_reference;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.consume_sub_obj_update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Objective_current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Objective_target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Objective_result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_dlg_get_quest_component_is_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_quest_component_C*       CallFunc_dlg_get_quest_component_quest_reference                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_quest_actor_C::Consume_sub_obj_update(class FName Objective_id, class FName Sub_objective_id, int32 Objective_current, int32 Objective_target, enum class Enum_quest_result Objective_result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_dlg_get_quest_component_is_valid, class Ubp_quest_component_C* CallFunc_dlg_get_quest_component_quest_reference, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "consume_sub_obj_update");

	Params::Abp_quest_actor_C_Consume_sub_obj_update_Params Parms{};

	Parms.Objective_id = Objective_id;
	Parms.Sub_objective_id = Sub_objective_id;
	Parms.Objective_current = Objective_current;
	Parms.Objective_target = Objective_target;
	Parms.Objective_result = Objective_result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_dlg_get_quest_component_is_valid = CallFunc_dlg_get_quest_component_is_valid;
	Parms.CallFunc_dlg_get_quest_component_quest_reference = CallFunc_dlg_get_quest_component_quest_reference;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.consume_obj_update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Objective_result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_dlg_get_quest_component_is_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_quest_component_C*       CallFunc_dlg_get_quest_component_quest_reference                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_quest_actor_C::Consume_obj_update(class FName Objective_id, enum class Enum_quest_result Objective_result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_dlg_get_quest_component_is_valid, class Ubp_quest_component_C* CallFunc_dlg_get_quest_component_quest_reference, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "consume_obj_update");

	Params::Abp_quest_actor_C_Consume_obj_update_Params Parms{};

	Parms.Objective_id = Objective_id;
	Parms.Objective_result = Objective_result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_dlg_get_quest_component_is_valid = CallFunc_dlg_get_quest_component_is_valid;
	Parms.CallFunc_dlg_get_quest_component_quest_reference = CallFunc_dlg_get_quest_component_quest_reference;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.consume_obj_added
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_removed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_dlg_get_quest_component_is_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_quest_component_C*       CallFunc_dlg_get_quest_component_quest_reference                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_quest_actor_C::Consume_obj_added(class FName Objective_id, bool Is_removed, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_dlg_get_quest_component_is_valid, class Ubp_quest_component_C* CallFunc_dlg_get_quest_component_quest_reference, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "consume_obj_added");

	Params::Abp_quest_actor_C_Consume_obj_added_Params Parms{};

	Parms.Objective_id = Objective_id;
	Parms.Is_removed = Is_removed;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_dlg_get_quest_component_is_valid = CallFunc_dlg_get_quest_component_is_valid;
	Parms.CallFunc_dlg_get_quest_component_quest_reference = CallFunc_dlg_get_quest_component_quest_reference;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.refresh_icons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_01_quest_mini_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// TArray<class Abp_quest_marker_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class UW_01_quest_mini_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class Abp_quest_marker_C*          CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_marker_C*          CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_objective_objective_exist                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_objective_objective_is_current                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_objective_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     CallFunc_get_objective_objective_data                            (HasGetValueTypeHash)
// bool                               CallFunc_get_objective_sub_objective_exist                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_sub_objective_index                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_get_objective_sub_objective_data                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_msl_get_actor_by_id_is_valid_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_actor_C::Refresh_icons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class UW_01_quest_mini_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, TArray<class Abp_quest_marker_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UW_01_quest_mini_C* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class Abp_quest_marker_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class Abp_quest_marker_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_get_objective_objective_exist, bool CallFunc_get_objective_objective_is_current, int32 CallFunc_get_objective_objective_index, const struct FS_quest_objective_data& CallFunc_get_objective_objective_data, bool CallFunc_get_objective_sub_objective_exist, int32 CallFunc_get_objective_sub_objective_index, const struct FS_quest_sub_objective_data& CallFunc_get_objective_sub_objective_data, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_quest_sub_objective_data& CallFunc_Array_Get_Item_2, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_msl_get_actor_by_id_is_valid_1, class AActor* CallFunc_msl_get_actor_by_id_actor_reference_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "refresh_icons");

	Params::Abp_quest_actor_C_Refresh_icons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_get_objective_objective_exist = CallFunc_get_objective_objective_exist;
	Parms.CallFunc_get_objective_objective_is_current = CallFunc_get_objective_objective_is_current;
	Parms.CallFunc_get_objective_objective_index = CallFunc_get_objective_objective_index;
	Parms.CallFunc_get_objective_objective_data = CallFunc_get_objective_objective_data;
	Parms.CallFunc_get_objective_sub_objective_exist = CallFunc_get_objective_sub_objective_exist;
	Parms.CallFunc_get_objective_sub_objective_index = CallFunc_get_objective_sub_objective_index;
	Parms.CallFunc_get_objective_sub_objective_data = CallFunc_get_objective_sub_objective_data;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_msl_get_actor_by_id_is_valid_1 = CallFunc_msl_get_actor_by_id_is_valid_1;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference_1 = CallFunc_msl_get_actor_by_id_actor_reference_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.set_active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_active                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_actor_C::Set_active(bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "set_active");

	Params::Abp_quest_actor_C_Set_active_Params Parms{};

	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.find_sub_objective
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_sub_objective_data Sub_objective_data                                               (Parm, OutParm, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data Local_sub_objective                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_is_valid                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_sub_objective_base CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_sub_objective_dynamicK2Node_MakeStruct_s_quest_sub_objective_dynamic                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data K2Node_SetFieldsInStruct_StructOut                               (UObjectWrapper, HasGetValueTypeHash)

void Abp_quest_actor_C::Find_sub_objective(class FName Sub_objective_id, bool* Is_valid, struct FS_quest_sub_objective_data* Sub_objective_data, const struct FS_quest_sub_objective_data& Local_sub_objective, bool Local_is_valid, const struct FS_quest_sub_objective_base& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_quest_sub_objective_dynamic& K2Node_MakeStruct_s_quest_sub_objective_dynamic, const struct FS_quest_sub_objective_data& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "find_sub_objective");

	Params::Abp_quest_actor_C_Find_sub_objective_Params Parms{};

	Parms.Sub_objective_id = Sub_objective_id;
	Parms.Local_sub_objective = Local_sub_objective;
	Parms.Local_is_valid = Local_is_valid;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_s_quest_sub_objective_dynamic = K2Node_MakeStruct_s_quest_sub_objective_dynamic;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Sub_objective_data != nullptr)
		*Sub_objective_data = std::move(Parms.Sub_objective_data);

}


// Function bp_quest_actor.bp_quest_actor_C.convert_quest_result_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_quest_result             Quest_result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_quest_result             Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AObject_quest_condition_parent_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AObject_quest_condition_parent_C*CallFunc_init_condition_object_quest_condition                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_result             CallFunc_quest_result_condition_return_value                     (HasGetValueTypeHash)

void Abp_quest_actor_C::Convert_quest_result_condition(const struct FS_quest_result& Quest_result, struct FS_quest_result* Return_value, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AObject_quest_condition_parent_C* CallFunc_FinishSpawningActor_ReturnValue, class AObject_quest_condition_parent_C* CallFunc_init_condition_object_quest_condition, const struct FS_quest_result& CallFunc_quest_result_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "convert_quest_result_condition");

	Params::Abp_quest_actor_C_Convert_quest_result_condition_Params Parms{};

	Parms.Quest_result = Quest_result;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_init_condition_object_quest_condition = CallFunc_init_condition_object_quest_condition;
	Parms.CallFunc_quest_result_condition_return_value = CallFunc_quest_result_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function bp_quest_actor.bp_quest_actor_C.convert_objective_result_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_quest_objective_result   Objective_result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_result   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AObject_quest_condition_parent_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AObject_quest_condition_parent_C*CallFunc_init_condition_object_quest_condition                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_result   CallFunc_objective_result_condition_return_value                 (HasGetValueTypeHash)

void Abp_quest_actor_C::Convert_objective_result_condition(const struct FS_quest_objective_result& Objective_result, class FName Objective_id, class FName Sub_objective_id, struct FS_quest_objective_result* Return_value, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AObject_quest_condition_parent_C* CallFunc_FinishSpawningActor_ReturnValue, class AObject_quest_condition_parent_C* CallFunc_init_condition_object_quest_condition, const struct FS_quest_objective_result& CallFunc_objective_result_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "convert_objective_result_condition");

	Params::Abp_quest_actor_C_Convert_objective_result_condition_Params Parms{};

	Parms.Objective_result = Objective_result;
	Parms.Objective_id = Objective_id;
	Parms.Sub_objective_id = Sub_objective_id;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_init_condition_object_quest_condition = CallFunc_init_condition_object_quest_condition;
	Parms.CallFunc_objective_result_condition_return_value = CallFunc_objective_result_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function bp_quest_actor.bp_quest_actor_C.convert_objective_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_quest_objective_data     Objective_data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_quest_objective_data     Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AObject_quest_condition_parent_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AObject_quest_condition_parent_C*CallFunc_init_condition_object_quest_condition                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     CallFunc_objective_data_condition_return_value                   (HasGetValueTypeHash)

void Abp_quest_actor_C::Convert_objective_condition(const struct FS_quest_objective_data& Objective_data, struct FS_quest_objective_data* Return_value, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AObject_quest_condition_parent_C* CallFunc_FinishSpawningActor_ReturnValue, class AObject_quest_condition_parent_C* CallFunc_init_condition_object_quest_condition, const struct FS_quest_objective_data& CallFunc_objective_data_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "convert_objective_condition");

	Params::Abp_quest_actor_C_Convert_objective_condition_Params Parms{};

	Parms.Objective_data = Objective_data;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_init_condition_object_quest_condition = CallFunc_init_condition_object_quest_condition;
	Parms.CallFunc_objective_data_condition_return_value = CallFunc_objective_data_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function bp_quest_actor.bp_quest_actor_C.convert_quest_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_quest_data               Quest_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_quest_data               Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AObject_quest_condition_parent_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AObject_quest_condition_parent_C*CallFunc_init_condition_object_quest_condition                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_data               CallFunc_quest_data_condition_return_value                       (HasGetValueTypeHash)

void Abp_quest_actor_C::Convert_quest_condition(const struct FS_quest_data& Quest_data, struct FS_quest_data* Return_value, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AObject_quest_condition_parent_C* CallFunc_FinishSpawningActor_ReturnValue, class AObject_quest_condition_parent_C* CallFunc_init_condition_object_quest_condition, const struct FS_quest_data& CallFunc_quest_data_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "convert_quest_condition");

	Params::Abp_quest_actor_C_Convert_quest_condition_Params Parms{};

	Parms.Quest_data = Quest_data;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_init_condition_object_quest_condition = CallFunc_init_condition_object_quest_condition;
	Parms.CallFunc_quest_data_condition_return_value = CallFunc_quest_data_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function bp_quest_actor.bp_quest_actor_C.find_quest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Quest_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_data               Quest_data                                                       (Parm, OutParm, HasGetValueTypeHash)
// bool                               Local_is_valid                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_data               Local_quest_data                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_base               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_actor_C::Find_quest(class FName Quest_id, bool* Is_valid, struct FS_quest_data* Quest_data, bool Local_is_valid, const struct FS_quest_data& Local_quest_data, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UDataTable* CallFunc_Array_Get_Item, const struct FS_quest_base& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "find_quest");

	Params::Abp_quest_actor_C_Find_quest_Params Parms{};

	Parms.Quest_id = Quest_id;
	Parms.Local_is_valid = Local_is_valid;
	Parms.Local_quest_data = Local_quest_data;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Quest_data != nullptr)
		*Quest_data = std::move(Parms.Quest_data);

}


// Function bp_quest_actor.bp_quest_actor_C.find_objective
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_objective_data     Objective_data                                                   (Parm, OutParm, HasGetValueTypeHash)
// struct FS_quest_objective_data     Local_objective                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_is_valid                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_objective_base     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_actor_C::Find_objective(class FName Objective_id, bool* Is_valid, struct FS_quest_objective_data* Objective_data, const struct FS_quest_objective_data& Local_objective, bool Local_is_valid, const struct FS_quest_objective_base& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "find_objective");

	Params::Abp_quest_actor_C_Find_objective_Params Parms{};

	Parms.Objective_id = Objective_id;
	Parms.Local_objective = Local_objective;
	Parms.Local_is_valid = Local_is_valid;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Objective_data != nullptr)
		*Objective_data = std::move(Parms.Objective_data);

}


// Function bp_quest_actor.bp_quest_actor_C.remove_objective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reset_past                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Remove_current                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_reset_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_objective_index                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_current                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_objective                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_reset_past                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_objective_data     CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_objective_objective_exist                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_objective_objective_is_current                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_objective_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     CallFunc_get_objective_objective_data                            (HasGetValueTypeHash)
// bool                               CallFunc_get_objective_sub_objective_exist                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_sub_objective_index                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_get_objective_sub_objective_data                        (HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_actor_C::Remove_objective(class FName Objective_id, bool Reset_past, bool Remove_current, class FName Local_reset_id, int32 Local_objective_index, bool Local_current, class FName Local_objective, int32 Local_index, bool Local_reset_past, const struct FS_quest_objective_data& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_get_objective_objective_exist, bool CallFunc_get_objective_objective_is_current, int32 CallFunc_get_objective_objective_index, const struct FS_quest_objective_data& CallFunc_get_objective_objective_data, bool CallFunc_get_objective_sub_objective_exist, int32 CallFunc_get_objective_sub_objective_index, const struct FS_quest_sub_objective_data& CallFunc_get_objective_sub_objective_data, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "remove_objective");

	Params::Abp_quest_actor_C_Remove_objective_Params Parms{};

	Parms.Objective_id = Objective_id;
	Parms.Reset_past = Reset_past;
	Parms.Remove_current = Remove_current;
	Parms.Local_reset_id = Local_reset_id;
	Parms.Local_objective_index = Local_objective_index;
	Parms.Local_current = Local_current;
	Parms.Local_objective = Local_objective;
	Parms.Local_index = Local_index;
	Parms.Local_reset_past = Local_reset_past;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_get_objective_objective_exist = CallFunc_get_objective_objective_exist;
	Parms.CallFunc_get_objective_objective_is_current = CallFunc_get_objective_objective_is_current;
	Parms.CallFunc_get_objective_objective_index = CallFunc_get_objective_objective_index;
	Parms.CallFunc_get_objective_objective_data = CallFunc_get_objective_objective_data;
	Parms.CallFunc_get_objective_sub_objective_exist = CallFunc_get_objective_sub_objective_exist;
	Parms.CallFunc_get_objective_sub_objective_index = CallFunc_get_objective_sub_objective_index;
	Parms.CallFunc_get_objective_sub_objective_data = CallFunc_get_objective_sub_objective_data;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.finish_quest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_quest_result       Quest_result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Local_quest_result                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_01_quest_mini_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_01_quest_mini_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_layout_widget_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_result             CallFunc_convert_quest_result_condition_return_value             (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_quest_actor_C::Finish_quest(enum class Enum_quest_result Quest_result, enum class Enum_quest_result Local_quest_result, int32 Temp_int_Array_Index_Variable, TArray<class UW_01_quest_mini_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_01_quest_mini_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FS_quest_result& CallFunc_convert_quest_result_condition_return_value, bool K2Node_SwitchEnum_CmpSuccess_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "finish_quest");

	Params::Abp_quest_actor_C_Finish_quest_Params Parms{};

	Parms.Quest_result = Quest_result;
	Parms.Local_quest_result = Local_quest_result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_get_layout_widget_is_valid = CallFunc_get_layout_widget_is_valid;
	Parms.CallFunc_get_layout_widget_quest_widget = CallFunc_get_layout_widget_quest_widget;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_convert_quest_result_condition_return_value = CallFunc_convert_quest_result_condition_return_value;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.set_description
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Description_id                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove_description                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_actor_C::Set_description(class FName Description_id, bool Remove_description, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "set_description");

	Params::Abp_quest_actor_C_Set_description_Params Parms{};

	Parms.Description_id = Description_id;
	Parms.Remove_description = Remove_description;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.consume_result
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_quest_objective_result   Objective_result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class Enum_quest_result       Objective_status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_actor_C::Consume_result(const struct FS_quest_objective_result& Objective_result, enum class Enum_quest_result Objective_status, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "consume_result");

	Params::Abp_quest_actor_C_Consume_result_Params Parms{};

	Parms.Objective_result = Objective_result;
	Parms.Objective_status = Objective_status;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.update_sub_objective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Sub_objective_value                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Add_value                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_quest_result       Set_value                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_sub_objective_index                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_objective_index                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Local_set                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_add                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_sub_objective_id                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_layout_widget_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_layout_widget_is_valid_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_layout_widget_is_valid_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_result   CallFunc_convert_objective_result_condition_return_value         (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_objective_objective_exist                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_objective_objective_is_current                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_objective_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     CallFunc_get_objective_objective_data                            (HasGetValueTypeHash)
// bool                               CallFunc_get_objective_sub_objective_exist                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_sub_objective_index                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_get_objective_sub_objective_data                        (HasGetValueTypeHash)

void Abp_quest_actor_C::Update_sub_objective(class FName Sub_objective_id, int32 Sub_objective_value, bool Add_value, enum class Enum_quest_result Set_value, int32 Local_sub_objective_index, int32 Local_objective_index, enum class Enum_quest_result Local_set, bool Local_add, int32 Local_value, class FName Local_sub_objective_id, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, bool CallFunc_get_layout_widget_is_valid_1, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_get_layout_widget_is_valid_2, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget_2, const struct FS_quest_objective_result& CallFunc_convert_objective_result_condition_return_value, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_5, bool CallFunc_get_objective_objective_exist, bool CallFunc_get_objective_objective_is_current, int32 CallFunc_get_objective_objective_index, const struct FS_quest_objective_data& CallFunc_get_objective_objective_data, bool CallFunc_get_objective_sub_objective_exist, int32 CallFunc_get_objective_sub_objective_index, const struct FS_quest_sub_objective_data& CallFunc_get_objective_sub_objective_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "update_sub_objective");

	Params::Abp_quest_actor_C_Update_sub_objective_Params Parms{};

	Parms.Sub_objective_id = Sub_objective_id;
	Parms.Sub_objective_value = Sub_objective_value;
	Parms.Add_value = Add_value;
	Parms.Set_value = Set_value;
	Parms.Local_sub_objective_index = Local_sub_objective_index;
	Parms.Local_objective_index = Local_objective_index;
	Parms.Local_set = Local_set;
	Parms.Local_add = Local_add;
	Parms.Local_value = Local_value;
	Parms.Local_sub_objective_id = Local_sub_objective_id;
	Parms.CallFunc_get_layout_widget_is_valid = CallFunc_get_layout_widget_is_valid;
	Parms.CallFunc_get_layout_widget_quest_widget = CallFunc_get_layout_widget_quest_widget;
	Parms.CallFunc_get_layout_widget_is_valid_1 = CallFunc_get_layout_widget_is_valid_1;
	Parms.CallFunc_get_layout_widget_quest_widget_1 = CallFunc_get_layout_widget_quest_widget_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_get_layout_widget_is_valid_2 = CallFunc_get_layout_widget_is_valid_2;
	Parms.CallFunc_get_layout_widget_quest_widget_2 = CallFunc_get_layout_widget_quest_widget_2;
	Parms.CallFunc_convert_objective_result_condition_return_value = CallFunc_convert_objective_result_condition_return_value;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_get_objective_objective_exist = CallFunc_get_objective_objective_exist;
	Parms.CallFunc_get_objective_objective_is_current = CallFunc_get_objective_objective_is_current;
	Parms.CallFunc_get_objective_objective_index = CallFunc_get_objective_objective_index;
	Parms.CallFunc_get_objective_objective_data = CallFunc_get_objective_objective_data;
	Parms.CallFunc_get_objective_sub_objective_exist = CallFunc_get_objective_sub_objective_exist;
	Parms.CallFunc_get_objective_sub_objective_index = CallFunc_get_objective_sub_objective_index;
	Parms.CallFunc_get_objective_sub_objective_data = CallFunc_get_objective_sub_objective_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.set_objective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove_current                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               First_Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_First_Objective                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_sub_objective_data Local_sub_objective                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FS_quest_objective_data     Local_objective                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_remove_current                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_objective_id                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_01_quest_mini_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_01_quest_mini_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_layout_widget_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_objective_is_valid                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_objective_data     CallFunc_find_objective_objective_data                           (HasGetValueTypeHash)
// struct FS_quest_objective_dynamic  K2Node_MakeStruct_s_quest_objective_dynamic                      (HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_dynamicK2Node_MakeStruct_s_quest_sub_objective_dynamic                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_sub_objective_is_valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_sub_objective_data CallFunc_find_sub_objective_sub_objective_data                   (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_objective_data     CallFunc_convert_objective_condition_return_value                (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_quest_actor_C::Set_objective(class FName Objective_id, bool Remove_current, bool First_Objective, bool Local_First_Objective, const struct FS_quest_sub_objective_data& Local_sub_objective, const struct FS_quest_objective_data& Local_objective, bool Local_remove_current, class FName Local_objective_id, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class UW_01_quest_mini_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_01_quest_mini_C* CallFunc_Array_Get_Item, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_find_objective_is_valid, const struct FS_quest_objective_data& CallFunc_find_objective_objective_data, const struct FS_quest_objective_dynamic& K2Node_MakeStruct_s_quest_objective_dynamic, class FName CallFunc_Array_Get_Item_1, const struct FS_quest_sub_objective_dynamic& K2Node_MakeStruct_s_quest_sub_objective_dynamic, bool CallFunc_find_sub_objective_is_valid, const struct FS_quest_sub_objective_data& CallFunc_find_sub_objective_sub_objective_data, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FS_quest_objective_data& CallFunc_convert_objective_condition_return_value, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "set_objective");

	Params::Abp_quest_actor_C_Set_objective_Params Parms{};

	Parms.Objective_id = Objective_id;
	Parms.Remove_current = Remove_current;
	Parms.First_Objective = First_Objective;
	Parms.Local_First_Objective = Local_First_Objective;
	Parms.Local_sub_objective = Local_sub_objective;
	Parms.Local_objective = Local_objective;
	Parms.Local_remove_current = Local_remove_current;
	Parms.Local_objective_id = Local_objective_id;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_get_layout_widget_is_valid = CallFunc_get_layout_widget_is_valid;
	Parms.CallFunc_get_layout_widget_quest_widget = CallFunc_get_layout_widget_quest_widget;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_find_objective_is_valid = CallFunc_find_objective_is_valid;
	Parms.CallFunc_find_objective_objective_data = CallFunc_find_objective_objective_data;
	Parms.K2Node_MakeStruct_s_quest_objective_dynamic = K2Node_MakeStruct_s_quest_objective_dynamic;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_s_quest_sub_objective_dynamic = K2Node_MakeStruct_s_quest_sub_objective_dynamic;
	Parms.CallFunc_find_sub_objective_is_valid = CallFunc_find_sub_objective_is_valid;
	Parms.CallFunc_find_sub_objective_sub_objective_data = CallFunc_find_sub_objective_sub_objective_data;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_convert_objective_condition_return_value = CallFunc_convert_objective_condition_return_value;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.update_objective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       New_objective_status                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Local_new_status                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_objective_id                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_layout_widget_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_objective_objective_exist                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_objective_objective_is_current                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_objective_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     CallFunc_get_objective_objective_data                            (HasGetValueTypeHash)
// bool                               CallFunc_get_objective_sub_objective_exist                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_sub_objective_index                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_get_objective_sub_objective_data                        (HasGetValueTypeHash)
// struct FS_quest_objective_result   CallFunc_convert_objective_result_condition_return_value         (HasGetValueTypeHash)

void Abp_quest_actor_C::Update_objective(class FName Objective_id, enum class Enum_quest_result New_objective_status, enum class Enum_quest_result Local_new_status, class FName Local_objective_id, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_get_objective_objective_exist, bool CallFunc_get_objective_objective_is_current, int32 CallFunc_get_objective_objective_index, const struct FS_quest_objective_data& CallFunc_get_objective_objective_data, bool CallFunc_get_objective_sub_objective_exist, int32 CallFunc_get_objective_sub_objective_index, const struct FS_quest_sub_objective_data& CallFunc_get_objective_sub_objective_data, const struct FS_quest_objective_result& CallFunc_convert_objective_result_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "update_objective");

	Params::Abp_quest_actor_C_Update_objective_Params Parms{};

	Parms.Objective_id = Objective_id;
	Parms.New_objective_status = New_objective_status;
	Parms.Local_new_status = Local_new_status;
	Parms.Local_objective_id = Local_objective_id;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_get_layout_widget_is_valid = CallFunc_get_layout_widget_is_valid;
	Parms.CallFunc_get_layout_widget_quest_widget = CallFunc_get_layout_widget_quest_widget;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_get_objective_objective_exist = CallFunc_get_objective_objective_exist;
	Parms.CallFunc_get_objective_objective_is_current = CallFunc_get_objective_objective_is_current;
	Parms.CallFunc_get_objective_objective_index = CallFunc_get_objective_objective_index;
	Parms.CallFunc_get_objective_objective_data = CallFunc_get_objective_objective_data;
	Parms.CallFunc_get_objective_sub_objective_exist = CallFunc_get_objective_sub_objective_exist;
	Parms.CallFunc_get_objective_sub_objective_index = CallFunc_get_objective_sub_objective_index;
	Parms.CallFunc_get_objective_sub_objective_data = CallFunc_get_objective_sub_objective_data;
	Parms.CallFunc_convert_objective_result_condition_return_value = CallFunc_convert_objective_result_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.get_objective
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Find_current_objective                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Objective_exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Objective_is_current                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Objective_index                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     Objective_data                                                   (Parm, OutParm, HasGetValueTypeHash)
// bool                               Sub_objective_exist                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Sub_objective_index                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data Sub_objective_data                                               (Parm, OutParm, HasGetValueTypeHash)
// bool                               Local_get_current                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_objective_current                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_objective_index                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_sub_objective_index                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_sub_objective_found                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_sub_objective_id                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data Local_sub_objective_data                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FS_quest_objective_data     Local_objective_data                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FName                        Local_objective_id                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_actor_C::Get_objective(class FName Objective_id, class FName Sub_objective_id, bool Find_current_objective, bool* Objective_exist, bool* Objective_is_current, int32* Objective_index, struct FS_quest_objective_data* Objective_data, bool* Sub_objective_exist, int32* Sub_objective_index, struct FS_quest_sub_objective_data* Sub_objective_data, bool Local_get_current, bool Local_objective_current, int32 Local_objective_index, int32 Local_sub_objective_index, bool Local_sub_objective_found, class FName Local_sub_objective_id, const struct FS_quest_sub_objective_data& Local_sub_objective_data, const struct FS_quest_objective_data& Local_objective_data, class FName Local_objective_id, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, const struct FS_quest_objective_data& CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue_1, const struct FS_quest_sub_objective_data& CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "get_objective");

	Params::Abp_quest_actor_C_Get_objective_Params Parms{};

	Parms.Objective_id = Objective_id;
	Parms.Sub_objective_id = Sub_objective_id;
	Parms.Find_current_objective = Find_current_objective;
	Parms.Local_get_current = Local_get_current;
	Parms.Local_objective_current = Local_objective_current;
	Parms.Local_objective_index = Local_objective_index;
	Parms.Local_sub_objective_index = Local_sub_objective_index;
	Parms.Local_sub_objective_found = Local_sub_objective_found;
	Parms.Local_sub_objective_id = Local_sub_objective_id;
	Parms.Local_sub_objective_data = Local_sub_objective_data;
	Parms.Local_objective_data = Local_objective_data;
	Parms.Local_objective_id = Local_objective_id;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Objective_exist != nullptr)
		*Objective_exist = Parms.Objective_exist;

	if (Objective_is_current != nullptr)
		*Objective_is_current = Parms.Objective_is_current;

	if (Objective_index != nullptr)
		*Objective_index = Parms.Objective_index;

	if (Objective_data != nullptr)
		*Objective_data = std::move(Parms.Objective_data);

	if (Sub_objective_exist != nullptr)
		*Sub_objective_exist = Parms.Sub_objective_exist;

	if (Sub_objective_index != nullptr)
		*Sub_objective_index = Parms.Sub_objective_index;

	if (Sub_objective_data != nullptr)
		*Sub_objective_data = std::move(Parms.Sub_objective_data);

}


// Function bp_quest_actor.bp_quest_actor_C.init_quest_data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Quest_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_quest_component_C*       Owning_quest_component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Skip_init                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_skip                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_quest_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_layout_widget_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_quest_is_valid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_quest_data               CallFunc_find_quest_quest_data                                   (HasGetValueTypeHash)
// struct FS_quest_data               CallFunc_convert_quest_condition_return_value                    (HasGetValueTypeHash)

void Abp_quest_actor_C::Init_quest_data(class FName Quest_id, class FName Quest_data, class Ubp_quest_component_C* Owning_quest_component, bool Skip_init, bool Local_skip, class FName Local_quest_id, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, bool CallFunc_find_quest_is_valid, const struct FS_quest_data& CallFunc_find_quest_quest_data, const struct FS_quest_data& CallFunc_convert_quest_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "init_quest_data");

	Params::Abp_quest_actor_C_Init_quest_data_Params Parms{};

	Parms.Quest_id = Quest_id;
	Parms.Quest_data = Quest_data;
	Parms.Owning_quest_component = Owning_quest_component;
	Parms.Skip_init = Skip_init;
	Parms.Local_skip = Local_skip;
	Parms.Local_quest_id = Local_quest_id;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_get_layout_widget_is_valid = CallFunc_get_layout_widget_is_valid;
	Parms.CallFunc_get_layout_widget_quest_widget = CallFunc_get_layout_widget_quest_widget;
	Parms.CallFunc_find_quest_is_valid = CallFunc_find_quest_is_valid;
	Parms.CallFunc_find_quest_quest_data = CallFunc_find_quest_quest_data;
	Parms.CallFunc_convert_quest_condition_return_value = CallFunc_convert_quest_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_actor.bp_quest_actor_C.delayed_destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_quest_actor_C::Delayed_destroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "delayed_destroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_quest_actor.bp_quest_actor_C.NextQuestEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_quest_actor_C::NextQuestEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "NextQuestEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_quest_actor.bp_quest_actor_C.ExecuteUbergraph_bp_quest_actor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_actor_C::ExecuteUbergraph_bp_quest_actor(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_actor_C", "ExecuteUbergraph_bp_quest_actor");

	Params::Abp_quest_actor_C_ExecuteUbergraph_bp_quest_actor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


