#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_dlg_proxy_base.bp_dlg_proxy_base_C
// (Actor)

class UClass* Abp_dlg_proxy_base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_dlg_proxy_base_C");

	return Clss;
}


// bp_dlg_proxy_base_C bp_dlg_proxy_base.Default__bp_dlg_proxy_base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_dlg_proxy_base_C* Abp_dlg_proxy_base_C::GetDefaultObj()
{
	static class Abp_dlg_proxy_base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_dlg_proxy_base_C*>(Abp_dlg_proxy_base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_dlg_proxy_base.bp_dlg_proxy_base_C.snapshot_mesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Mesh_component                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Snapshot_name                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseSnapshot               Snapshot_data                                                    (Parm, OutParm)
// TArray<struct FTransform>          Local_transform                                                  (Edit, BlueprintVisible)
// TArray<class FName>                Local_name                                                       (Edit, BlueprintVisible)
// class USkeletalMeshComponent*      Local_mesh                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseSnapshot               K2Node_MakeStruct_PoseSnapshot                                   (None)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAllSocketNames_ReturnValue                           (ReferenceParm)

void Abp_dlg_proxy_base_C::Snapshot_mesh(class USkeletalMeshComponent* Mesh_component, class FName Snapshot_name, struct FPoseSnapshot* Snapshot_data, const TArray<struct FTransform>& Local_transform, const TArray<class FName>& Local_name, class USkeletalMeshComponent* Local_mesh, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FPoseSnapshot& K2Node_MakeStruct_PoseSnapshot, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_base_C", "snapshot_mesh");

	Params::Abp_dlg_proxy_base_C_Snapshot_mesh_Params Parms{};

	Parms.Mesh_component = Mesh_component;
	Parms.Snapshot_name = Snapshot_name;
	Parms.Local_transform = Local_transform;
	Parms.Local_name = Local_name;
	Parms.Local_mesh = Local_mesh;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeStruct_PoseSnapshot = K2Node_MakeStruct_PoseSnapshot;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetAllSocketNames_ReturnValue = CallFunc_GetAllSocketNames_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Snapshot_data != nullptr)
		*Snapshot_data = std::move(Parms.Snapshot_data);

}


// Function bp_dlg_proxy_base.bp_dlg_proxy_base_C.set_mesh_list
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>Mesh_list                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void Abp_dlg_proxy_base_C::Set_mesh_list(TArray<class USkeletalMeshComponent*>& Mesh_list)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_base_C", "set_mesh_list");

	Params::Abp_dlg_proxy_base_C_Set_mesh_list_Params Parms{};

	Parms.Mesh_list = Mesh_list;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_proxy_base.bp_dlg_proxy_base_C.get_float_var
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Var_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Return_value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_var_id_is_valid                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_find_var_id_found_index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_proxy_base_C::Get_float_var(class FName Var_id, float* Return_value, bool CallFunc_find_var_id_is_valid, int32 CallFunc_find_var_id_found_index, float CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_base_C", "get_float_var");

	Params::Abp_dlg_proxy_base_C_Get_float_var_Params Parms{};

	Parms.Var_id = Var_id;
	Parms.CallFunc_find_var_id_is_valid = CallFunc_find_var_id_is_valid;
	Parms.CallFunc_find_var_id_found_index = CallFunc_find_var_id_found_index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = Parms.Return_value;

}


// Function bp_dlg_proxy_base.bp_dlg_proxy_base_C.find_var_id
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Var_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_dlg_proxy_base_C::Find_var_id(class FName Var_id, bool* Is_valid, int32* Found_index, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_base_C", "find_var_id");

	Params::Abp_dlg_proxy_base_C_Find_var_id_Params Parms{};

	Parms.Var_id = Var_id;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Found_index != nullptr)
		*Found_index = Parms.Found_index;

}


// Function bp_dlg_proxy_base.bp_dlg_proxy_base_C.set_float_var
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Var_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Var_value                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Return_value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_var_id_is_valid                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_find_var_id_found_index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_proxy_base_C::Set_float_var(class FName Var_id, float Var_value, float* Return_value, float Local_value, class FName Local_id, bool CallFunc_find_var_id_is_valid, int32 CallFunc_find_var_id_found_index, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_base_C", "set_float_var");

	Params::Abp_dlg_proxy_base_C_Set_float_var_Params Parms{};

	Parms.Var_id = Var_id;
	Parms.Var_value = Var_value;
	Parms.Local_value = Local_value;
	Parms.Local_id = Local_id;
	Parms.CallFunc_find_var_id_is_valid = CallFunc_find_var_id_is_valid;
	Parms.CallFunc_find_var_id_found_index = CallFunc_find_var_id_found_index;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = Parms.Return_value;

}


// Function bp_dlg_proxy_base.bp_dlg_proxy_base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_proxy_base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_base_C", "ReceiveTick");

	Params::Abp_dlg_proxy_base_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_proxy_base.bp_dlg_proxy_base_C.custom_proxy_init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_dlg_proxy_base_C::Custom_proxy_init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_base_C", "custom_proxy_init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_dlg_proxy_base.bp_dlg_proxy_base_C.custom_proxy_tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta_seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_proxy_base_C::Custom_proxy_tick(float Delta_seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_base_C", "custom_proxy_tick");

	Params::Abp_dlg_proxy_base_C_Custom_proxy_tick_Params Parms{};

	Parms.Delta_seconds = Delta_seconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_proxy_base.bp_dlg_proxy_base_C.proxy_init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Proxy_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_proxy_base_C::Proxy_init(class Abp_dlg_actor_C* Dlg_actor, class FName Proxy_id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_base_C", "proxy_init");

	Params::Abp_dlg_proxy_base_C_Proxy_init_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Proxy_id = Proxy_id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_proxy_base.bp_dlg_proxy_base_C.ExecuteUbergraph_bp_dlg_proxy_base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_proxy_id                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_delta_seconds                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_proxy_base_C::ExecuteUbergraph_bp_dlg_proxy_base(int32 EntryPoint, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor, class FName K2Node_CustomEvent_proxy_id, float K2Node_Event_DeltaSeconds, float K2Node_CustomEvent_delta_seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_base_C", "ExecuteUbergraph_bp_dlg_proxy_base");

	Params::Abp_dlg_proxy_base_C_ExecuteUbergraph_bp_dlg_proxy_base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_dlg_actor = K2Node_CustomEvent_dlg_actor;
	Parms.K2Node_CustomEvent_proxy_id = K2Node_CustomEvent_proxy_id;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_delta_seconds = K2Node_CustomEvent_delta_seconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


