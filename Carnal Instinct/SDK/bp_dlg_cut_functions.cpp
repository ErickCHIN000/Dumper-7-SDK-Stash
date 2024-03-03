#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_dlg_cut.bp_dlg_cut_C
// (Actor)

class UClass* Abp_dlg_cut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_dlg_cut_C");

	return Clss;
}


// bp_dlg_cut_C bp_dlg_cut.Default__bp_dlg_cut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_dlg_cut_C* Abp_dlg_cut_C::GetDefaultObj()
{
	static class Abp_dlg_cut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_dlg_cut_C*>(Abp_dlg_cut_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_dlg_cut.bp_dlg_cut_C.calculate_override
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_camera_override      Camera_override                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_camera_settings_info Camera_values                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_camera_settings_info Local_values                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cut_C::Calculate_override(const struct FS_dlg_camera_override& Camera_override, const struct FS_dlg_camera_settings_info& Camera_values, const struct FS_dlg_camera_settings_info& Local_values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "calculate_override");

	Params::Abp_dlg_cut_C_Calculate_override_Params Parms{};

	Parms.Camera_override = Camera_override;
	Parms.Camera_values = Camera_values;
	Parms.Local_values = Local_values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.convert_override
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_camera_settings      Camera_settings                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_camera_override      K2Node_MakeStruct_s_dlg_camera_override                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_camera_settings_base CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_dlg_cut_C::Convert_override(const struct FS_dlg_camera_settings& Camera_settings, const struct FS_dlg_camera_override& K2Node_MakeStruct_s_dlg_camera_override, const struct FS_dlg_camera_settings_base& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "convert_override");

	Params::Abp_dlg_cut_C_Convert_override_Params Parms{};

	Parms.Camera_settings = Camera_settings;
	Parms.K2Node_MakeStruct_s_dlg_camera_override = K2Node_MakeStruct_s_dlg_camera_override;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.spawn_cam_list
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CallFunc_add_camera_proxy_camera_reference                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cut_C::Spawn_cam_list(int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ACineCameraActor* CallFunc_add_camera_proxy_camera_reference, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "spawn_cam_list");

	Params::Abp_dlg_cut_C_Spawn_cam_list_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_add_camera_proxy_camera_reference = CallFunc_add_camera_proxy_camera_reference;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.remove_camera_proxy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Camera_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove_all                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_all                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_camera_proxy_is_valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_camera_proxy_found_index                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CallFunc_get_camera_proxy_camera_actor                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_dlg_cut_C::Remove_camera_proxy(class FName Camera_id, bool Remove_all, bool Local_all, class FName Local_id, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Max_ReturnValue, bool CallFunc_get_camera_proxy_is_valid, int32 CallFunc_get_camera_proxy_found_index, class ACineCameraActor* CallFunc_get_camera_proxy_camera_actor, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "remove_camera_proxy");

	Params::Abp_dlg_cut_C_Remove_camera_proxy_Params Parms{};

	Parms.Camera_id = Camera_id;
	Parms.Remove_all = Remove_all;
	Parms.Local_all = Local_all;
	Parms.Local_id = Local_id;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_get_camera_proxy_is_valid = CallFunc_get_camera_proxy_is_valid;
	Parms.CallFunc_get_camera_proxy_found_index = CallFunc_get_camera_proxy_found_index;
	Parms.CallFunc_get_camera_proxy_camera_actor = CallFunc_get_camera_proxy_camera_actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.get_camera_proxy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Camera_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            Camera_actor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACineCameraActor*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cut_C::Get_camera_proxy(class FName Camera_id, bool* Is_valid, int32* Found_index, class ACineCameraActor** Camera_actor, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class ACineCameraActor* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "get_camera_proxy");

	Params::Abp_dlg_cut_C_Get_camera_proxy_Params Parms{};

	Parms.Camera_id = Camera_id;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Found_index != nullptr)
		*Found_index = Parms.Found_index;

	if (Camera_actor != nullptr)
		*Camera_actor = Parms.Camera_actor;

}


// Function bp_dlg_cut.bp_dlg_cut_C.add_camera_proxy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Camera_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Replace_existing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACineCameraActor*            Camera_reference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_replace                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACineCameraActor*            Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACineCameraActor*            CallFunc_add_camera_proxy_camera_reference                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_camera_proxy_is_valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_camera_proxy_found_index                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CallFunc_get_camera_proxy_camera_actor                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cut_C::Add_camera_proxy(class FName Camera_id, bool Replace_existing, class ACineCameraActor** Camera_reference, bool Local_replace, class ACineCameraActor* Local_actor, class FName Local_id, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACineCameraActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACineCameraActor* CallFunc_add_camera_proxy_camera_reference, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_get_camera_proxy_is_valid, int32 CallFunc_get_camera_proxy_found_index, class ACineCameraActor* CallFunc_get_camera_proxy_camera_actor, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "add_camera_proxy");

	Params::Abp_dlg_cut_C_Add_camera_proxy_Params Parms{};

	Parms.Camera_id = Camera_id;
	Parms.Replace_existing = Replace_existing;
	Parms.Local_replace = Local_replace;
	Parms.Local_actor = Local_actor;
	Parms.Local_id = Local_id;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_add_camera_proxy_camera_reference = CallFunc_add_camera_proxy_camera_reference;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_get_camera_proxy_is_valid = CallFunc_get_camera_proxy_is_valid;
	Parms.CallFunc_get_camera_proxy_found_index = CallFunc_get_camera_proxy_found_index;
	Parms.CallFunc_get_camera_proxy_camera_actor = CallFunc_get_camera_proxy_camera_actor;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Camera_reference != nullptr)
		*Camera_reference = Parms.Camera_reference;

}


// Function bp_dlg_cut.bp_dlg_cut_C.init_actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CallFunc_add_camera_proxy_camera_reference                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_actor_is_valid                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_dlg_actor_is_component_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_actor_actor_index                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_get_dlg_actor_actor_reference                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_dlg_component_C*         CallFunc_get_dlg_actor_dlg_component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_bind_actor_info      CallFunc_get_dlg_actor_actor_dynamic                             (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cut_C::Init_actor(class Abp_dlg_actor_C* Dlg_actor, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_Array_Get_Item, class ACineCameraActor* CallFunc_add_camera_proxy_camera_reference, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_get_dlg_actor_is_valid, bool CallFunc_get_dlg_actor_is_component_valid, int32 CallFunc_get_dlg_actor_actor_index, class AActor* CallFunc_get_dlg_actor_actor_reference, class Ubp_dlg_component_C* CallFunc_get_dlg_actor_dlg_component, const struct FS_dlg_bind_actor_info& CallFunc_get_dlg_actor_actor_dynamic, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "init_actor");

	Params::Abp_dlg_cut_C_Init_actor_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_add_camera_proxy_camera_reference = CallFunc_add_camera_proxy_camera_reference;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_get_dlg_actor_is_valid = CallFunc_get_dlg_actor_is_valid;
	Parms.CallFunc_get_dlg_actor_is_component_valid = CallFunc_get_dlg_actor_is_component_valid;
	Parms.CallFunc_get_dlg_actor_actor_index = CallFunc_get_dlg_actor_actor_index;
	Parms.CallFunc_get_dlg_actor_actor_reference = CallFunc_get_dlg_actor_actor_reference;
	Parms.CallFunc_get_dlg_actor_dlg_component = CallFunc_get_dlg_actor_dlg_component;
	Parms.CallFunc_get_dlg_actor_actor_dynamic = CallFunc_get_dlg_actor_actor_dynamic;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.select_cam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_camera_info          Camera_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_interlocutor                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_dlg_actor_is_valid                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_dlg_actor_is_component_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_actor_actor_index                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_get_dlg_actor_actor_reference                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_dlg_component_C*         CallFunc_get_dlg_actor_dlg_component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_bind_actor_info      CallFunc_get_dlg_actor_actor_dynamic                             (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_camera_proxy_is_valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_camera_proxy_found_index                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CallFunc_get_camera_proxy_camera_actor                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        CallFunc_get_auto_cam_random_cam                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_auto_cam_latest_random                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        CallFunc_GetCineCameraComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_dlg_actor_is_valid_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_dlg_actor_is_component_valid_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_actor_actor_index_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_get_dlg_actor_actor_reference_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_dlg_component_C*         CallFunc_get_dlg_actor_dlg_component_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_bind_actor_info      CallFunc_get_dlg_actor_actor_dynamic_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_camera_is_valid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_camera_found_index                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_get_camera_camera_component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        K2Node_DynamicCast_AsCine_Camera_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_dlg_cut_C::Select_cam(const struct FS_dlg_camera_info& Camera_info, class FName Local_interlocutor, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_get_dlg_actor_is_valid, bool CallFunc_get_dlg_actor_is_component_valid, int32 CallFunc_get_dlg_actor_actor_index, class AActor* CallFunc_get_dlg_actor_actor_reference, class Ubp_dlg_component_C* CallFunc_get_dlg_actor_dlg_component, const struct FS_dlg_bind_actor_info& CallFunc_get_dlg_actor_actor_dynamic, bool CallFunc_get_camera_proxy_is_valid, int32 CallFunc_get_camera_proxy_found_index, class ACineCameraActor* CallFunc_get_camera_proxy_camera_actor, class UCineCameraComponent* CallFunc_get_auto_cam_random_cam, int32 CallFunc_get_auto_cam_latest_random, class UCineCameraComponent* CallFunc_GetCineCameraComponent_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_get_dlg_actor_is_valid_1, bool CallFunc_get_dlg_actor_is_component_valid_1, int32 CallFunc_get_dlg_actor_actor_index_1, class AActor* CallFunc_get_dlg_actor_actor_reference_1, class Ubp_dlg_component_C* CallFunc_get_dlg_actor_dlg_component_1, const struct FS_dlg_bind_actor_info& CallFunc_get_dlg_actor_actor_dynamic_1, bool CallFunc_get_camera_is_valid, int32 CallFunc_get_camera_found_index, class UCameraComponent* CallFunc_get_camera_camera_component, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "select_cam");

	Params::Abp_dlg_cut_C_Select_cam_Params Parms{};

	Parms.Camera_info = Camera_info;
	Parms.Local_interlocutor = Local_interlocutor;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_get_dlg_actor_is_valid = CallFunc_get_dlg_actor_is_valid;
	Parms.CallFunc_get_dlg_actor_is_component_valid = CallFunc_get_dlg_actor_is_component_valid;
	Parms.CallFunc_get_dlg_actor_actor_index = CallFunc_get_dlg_actor_actor_index;
	Parms.CallFunc_get_dlg_actor_actor_reference = CallFunc_get_dlg_actor_actor_reference;
	Parms.CallFunc_get_dlg_actor_dlg_component = CallFunc_get_dlg_actor_dlg_component;
	Parms.CallFunc_get_dlg_actor_actor_dynamic = CallFunc_get_dlg_actor_actor_dynamic;
	Parms.CallFunc_get_camera_proxy_is_valid = CallFunc_get_camera_proxy_is_valid;
	Parms.CallFunc_get_camera_proxy_found_index = CallFunc_get_camera_proxy_found_index;
	Parms.CallFunc_get_camera_proxy_camera_actor = CallFunc_get_camera_proxy_camera_actor;
	Parms.CallFunc_get_auto_cam_random_cam = CallFunc_get_auto_cam_random_cam;
	Parms.CallFunc_get_auto_cam_latest_random = CallFunc_get_auto_cam_latest_random;
	Parms.CallFunc_GetCineCameraComponent_ReturnValue = CallFunc_GetCineCameraComponent_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_get_dlg_actor_is_valid_1 = CallFunc_get_dlg_actor_is_valid_1;
	Parms.CallFunc_get_dlg_actor_is_component_valid_1 = CallFunc_get_dlg_actor_is_component_valid_1;
	Parms.CallFunc_get_dlg_actor_actor_index_1 = CallFunc_get_dlg_actor_actor_index_1;
	Parms.CallFunc_get_dlg_actor_actor_reference_1 = CallFunc_get_dlg_actor_actor_reference_1;
	Parms.CallFunc_get_dlg_actor_dlg_component_1 = CallFunc_get_dlg_actor_dlg_component_1;
	Parms.CallFunc_get_dlg_actor_actor_dynamic_1 = CallFunc_get_dlg_actor_actor_dynamic_1;
	Parms.CallFunc_get_camera_is_valid = CallFunc_get_camera_is_valid;
	Parms.CallFunc_get_camera_found_index = CallFunc_get_camera_found_index;
	Parms.CallFunc_get_camera_camera_component = CallFunc_get_camera_camera_component;
	Parms.K2Node_DynamicCast_AsCine_Camera_Component = K2Node_DynamicCast_AsCine_Camera_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.start_cam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACineCameraActor*            Target_cam_actor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        Target_cam_component                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        Local_cam_component                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            Local_cam_actor                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMinimalViewInfo            CallFunc_GetCameraView_DesiredView                               (None)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult_1                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cut_C::Start_cam(class ACineCameraActor* Target_cam_actor, class UCineCameraComponent* Target_cam_component, class UCineCameraComponent* Local_cam_component, class ACineCameraActor* Local_cam_actor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FMinimalViewInfo& CallFunc_GetCameraView_DesiredView, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_1, bool CallFunc_K2_SetActorTransform_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "start_cam");

	Params::Abp_dlg_cut_C_Start_cam_Params Parms{};

	Parms.Target_cam_actor = Target_cam_actor;
	Parms.Target_cam_component = Target_cam_component;
	Parms.Local_cam_component = Local_cam_component;
	Parms.Local_cam_actor = Local_cam_actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCameraView_DesiredView = CallFunc_GetCameraView_DesiredView;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult_1 = CallFunc_K2_SetActorTransform_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue_1 = CallFunc_K2_SetActorTransform_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.update_cam_anim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraAnimInst*             CallFunc_PlayCameraAnim_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_dlg_cut_C::Update_cam_anim(class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class UCameraAnimInst* CallFunc_PlayCameraAnim_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "update_cam_anim");

	Params::Abp_dlg_cut_C_Update_cam_anim_Params Parms{};

	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_PlayCameraAnim_ReturnValue = CallFunc_PlayCameraAnim_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.end_cam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        CallFunc_GetCineCameraComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMinimalViewInfo            CallFunc_GetCameraView_DesiredView                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_dlg_cut_C::End_cam(const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UCineCameraComponent* CallFunc_GetCineCameraComponent_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FMinimalViewInfo& CallFunc_GetCameraView_DesiredView, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "end_cam");

	Params::Abp_dlg_cut_C_End_cam_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCineCameraComponent_ReturnValue = CallFunc_GetCineCameraComponent_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetCameraView_DesiredView = CallFunc_GetCameraView_DesiredView;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.convert_data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Interp_speed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_speed                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        CallFunc_convert_post_process_result_pp                          (None)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCineCameraComponent*        CallFunc_GetCineCameraComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        CallFunc_GetCineCameraComponent_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_compact_finterp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        CallFunc_GetCineCameraComponent_ReturnValue_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCineCameraComponent*        CallFunc_GetCineCameraComponent_ReturnValue_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_compact_finterp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_compact_finterp_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCineCameraComponent*        CallFunc_GetCineCameraComponent_ReturnValue_4                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        CallFunc_GetCineCameraComponent_ReturnValue_5                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        CallFunc_GetCineCameraComponent_ReturnValue_6                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        CallFunc_GetCineCameraComponent_ReturnValue_7                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_compact_finterp_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_compact_finterp_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCameraFilmbackSettings     K2Node_MakeStruct_CameraFilmbackSettings                         (NoDestructor)

void Abp_dlg_cut_C::Convert_data(float Interp_speed, float Local_speed, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FPostProcessSettings& CallFunc_convert_post_process_result_pp, bool CallFunc_Greater_FloatFloat_ReturnValue, class UCineCameraComponent* CallFunc_GetCineCameraComponent_ReturnValue, class UCineCameraComponent* CallFunc_GetCineCameraComponent_ReturnValue_1, float CallFunc_compact_finterp_ReturnValue, class UCineCameraComponent* CallFunc_GetCineCameraComponent_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UCineCameraComponent* CallFunc_GetCineCameraComponent_ReturnValue_3, float CallFunc_compact_finterp_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_compact_finterp_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_4, class UCineCameraComponent* CallFunc_GetCineCameraComponent_ReturnValue_4, class UCineCameraComponent* CallFunc_GetCineCameraComponent_ReturnValue_5, class UCineCameraComponent* CallFunc_GetCineCameraComponent_ReturnValue_6, class UCineCameraComponent* CallFunc_GetCineCameraComponent_ReturnValue_7, float CallFunc_compact_finterp_ReturnValue_3, float CallFunc_compact_finterp_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_4, const struct FCameraFilmbackSettings& K2Node_MakeStruct_CameraFilmbackSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "convert_data");

	Params::Abp_dlg_cut_C_Convert_data_Params Parms{};

	Parms.Interp_speed = Interp_speed;
	Parms.Local_speed = Local_speed;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_convert_post_process_result_pp = CallFunc_convert_post_process_result_pp;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCineCameraComponent_ReturnValue = CallFunc_GetCineCameraComponent_ReturnValue;
	Parms.CallFunc_GetCineCameraComponent_ReturnValue_1 = CallFunc_GetCineCameraComponent_ReturnValue_1;
	Parms.CallFunc_compact_finterp_ReturnValue = CallFunc_compact_finterp_ReturnValue;
	Parms.CallFunc_GetCineCameraComponent_ReturnValue_2 = CallFunc_GetCineCameraComponent_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetCineCameraComponent_ReturnValue_3 = CallFunc_GetCineCameraComponent_ReturnValue_3;
	Parms.CallFunc_compact_finterp_ReturnValue_1 = CallFunc_compact_finterp_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_compact_finterp_ReturnValue_2 = CallFunc_compact_finterp_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GetCineCameraComponent_ReturnValue_4 = CallFunc_GetCineCameraComponent_ReturnValue_4;
	Parms.CallFunc_GetCineCameraComponent_ReturnValue_5 = CallFunc_GetCineCameraComponent_ReturnValue_5;
	Parms.CallFunc_GetCineCameraComponent_ReturnValue_6 = CallFunc_GetCineCameraComponent_ReturnValue_6;
	Parms.CallFunc_GetCineCameraComponent_ReturnValue_7 = CallFunc_GetCineCameraComponent_ReturnValue_7;
	Parms.CallFunc_compact_finterp_ReturnValue_3 = CallFunc_compact_finterp_ReturnValue_3;
	Parms.CallFunc_compact_finterp_ReturnValue_4 = CallFunc_compact_finterp_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.K2Node_MakeStruct_CameraFilmbackSettings = K2Node_MakeStruct_CameraFilmbackSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.compact_finterp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float Abp_dlg_cut_C::Compact_finterp(float Current, float Target, float InterpSpeed, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "compact_finterp");

	Params::Abp_dlg_cut_C_Compact_finterp_Params Parms{};

	Parms.Current = Current;
	Parms.Target = Target;
	Parms.InterpSpeed = InterpSpeed;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bp_dlg_cut.bp_dlg_cut_C.convert_post_process
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Target_pp                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPostProcessSettings        Result_pp                                                        (Parm, OutParm)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)

void Abp_dlg_cut_C::Convert_post_process(const struct FPostProcessSettings& Target_pp, struct FPostProcessSettings* Result_pp, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "convert_post_process");

	Params::Abp_dlg_cut_C_Convert_post_process_Params Parms{};

	Parms.Target_pp = Target_pp;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

	if (Result_pp != nullptr)
		*Result_pp = std::move(Parms.Result_pp);

}


// Function bp_dlg_cut.bp_dlg_cut_C.check_player_cam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Is_target                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_dlg_cut_C::Check_player_cam(bool* Is_target, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "check_player_cam");

	Params::Abp_dlg_cut_C_Check_player_cam_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_target != nullptr)
		*Is_target = Parms.Is_target;

}


// Function bp_dlg_cut.bp_dlg_cut_C.tick_cut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_compact_finterp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TInterpTo_ReturnValue                                   (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_dlg_cut_C::Tick_cut(const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_compact_finterp_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, float CallFunc_FClamp_ReturnValue, const struct FTransform& CallFunc_TInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "tick_cut");

	Params::Abp_dlg_cut_C_Tick_cut_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_compact_finterp_ReturnValue = CallFunc_compact_finterp_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_TInterpTo_ReturnValue = CallFunc_TInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.destroy_camera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_dlg_cut_C::Destroy_camera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "destroy_camera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_dlg_cut.bp_dlg_cut_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cut_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "ReceiveTick");

	Params::Abp_dlg_cut_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cut.bp_dlg_cut_C.ExecuteUbergraph_bp_dlg_cut
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cut_C::ExecuteUbergraph_bp_dlg_cut(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cut_C", "ExecuteUbergraph_bp_dlg_cut");

	Params::Abp_dlg_cut_C_ExecuteUbergraph_bp_dlg_cut_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


