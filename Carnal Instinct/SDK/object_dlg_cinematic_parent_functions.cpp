#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass object_dlg_cinematic_parent.object_dlg_cinematic_parent_C
// (Actor)

class UClass* AObject_dlg_cinematic_parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("object_dlg_cinematic_parent_C");

	return Clss;
}


// object_dlg_cinematic_parent_C object_dlg_cinematic_parent.Default__object_dlg_cinematic_parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AObject_dlg_cinematic_parent_C* AObject_dlg_cinematic_parent_C::GetDefaultObj()
{
	static class AObject_dlg_cinematic_parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AObject_dlg_cinematic_parent_C*>(AObject_dlg_cinematic_parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.get_cinematic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_cinematic_info       Cinematic_info                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_cinematic_list       Cinematic_data                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_cinematic_list       Local_data                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_found                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_cinematic_info       Local_info                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_cinematic_list       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_cinematic_list       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AObject_dlg_cinematic_parent_C::Get_cinematic(const struct FS_dlg_cinematic_info& Cinematic_info, bool* Is_valid, struct FS_dlg_cinematic_list* Cinematic_data, const struct FS_dlg_cinematic_list& Local_data, bool Local_found, const struct FS_dlg_cinematic_info& Local_info, int32 Temp_int_Array_Index_Variable, const struct FS_dlg_cinematic_list& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FS_dlg_cinematic_list& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "get_cinematic");

	Params::AObject_dlg_cinematic_parent_C_Get_cinematic_Params Parms{};

	Parms.Cinematic_info = Cinematic_info;
	Parms.Local_data = Local_data;
	Parms.Local_found = Local_found;
	Parms.Local_info = Local_info;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Cinematic_data != nullptr)
		*Cinematic_data = std::move(Parms.Cinematic_data);

}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.get_widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Widget_index                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_proxy_widget_C*      Widget_proxy                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_widget_is_valid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_widget_found_index                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_layout_widget_3d_C*  CallFunc_get_widget_widget_actor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_proxy_widget_C*      CallFunc_get_widget_widget_proxy                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AObject_dlg_cinematic_parent_C::Get_widget(int32 Widget_index, class Abp_dlg_proxy_widget_C** Widget_proxy, bool CallFunc_get_widget_is_valid, int32 CallFunc_get_widget_found_index, class Abp_dlg_layout_widget_3d_C* CallFunc_get_widget_widget_actor, class Abp_dlg_proxy_widget_C* CallFunc_get_widget_widget_proxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "get_widget");

	Params::AObject_dlg_cinematic_parent_C_Get_widget_Params Parms{};

	Parms.Widget_index = Widget_index;
	Parms.CallFunc_get_widget_is_valid = CallFunc_get_widget_is_valid;
	Parms.CallFunc_get_widget_found_index = CallFunc_get_widget_found_index;
	Parms.CallFunc_get_widget_widget_actor = CallFunc_get_widget_widget_actor;
	Parms.CallFunc_get_widget_widget_proxy = CallFunc_get_widget_widget_proxy;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget_proxy != nullptr)
		*Widget_proxy = Parms.Widget_proxy;

}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.get_camera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Camera_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Camera_index                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            Camera_proxy                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_camera_proxy_is_valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_camera_proxy_found_index                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CallFunc_get_camera_proxy_camera_actor                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_camera_proxy_is_valid_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_camera_proxy_found_index_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CallFunc_get_camera_proxy_camera_actor_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AObject_dlg_cinematic_parent_C::Get_camera(class FName Camera_id, int32 Camera_index, class ACineCameraActor** Camera_proxy, bool CallFunc_get_camera_proxy_is_valid, int32 CallFunc_get_camera_proxy_found_index, class ACineCameraActor* CallFunc_get_camera_proxy_camera_actor, class FName CallFunc_Array_Get_Item, bool CallFunc_get_camera_proxy_is_valid_1, int32 CallFunc_get_camera_proxy_found_index_1, class ACineCameraActor* CallFunc_get_camera_proxy_camera_actor_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "get_camera");

	Params::AObject_dlg_cinematic_parent_C_Get_camera_Params Parms{};

	Parms.Camera_id = Camera_id;
	Parms.Camera_index = Camera_index;
	Parms.CallFunc_get_camera_proxy_is_valid = CallFunc_get_camera_proxy_is_valid;
	Parms.CallFunc_get_camera_proxy_found_index = CallFunc_get_camera_proxy_found_index;
	Parms.CallFunc_get_camera_proxy_camera_actor = CallFunc_get_camera_proxy_camera_actor;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_get_camera_proxy_is_valid_1 = CallFunc_get_camera_proxy_is_valid_1;
	Parms.CallFunc_get_camera_proxy_found_index_1 = CallFunc_get_camera_proxy_found_index_1;
	Parms.CallFunc_get_camera_proxy_camera_actor_1 = CallFunc_get_camera_proxy_camera_actor_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Camera_proxy != nullptr)
		*Camera_proxy = Parms.Camera_proxy;

}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.get_actor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Actor_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Actor_index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor_proxy                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_proxy_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_proxy_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_proxy_base_C*        CallFunc_get_proxy_proxy_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_proxy_is_valid_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_proxy_found_index_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_proxy_base_C*        CallFunc_get_proxy_proxy_actor_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AObject_dlg_cinematic_parent_C::Get_actor(class FName Actor_id, int32 Actor_index, class AActor** Actor_proxy, bool CallFunc_get_proxy_is_valid, int32 CallFunc_get_proxy_found_index, class Abp_dlg_proxy_base_C* CallFunc_get_proxy_proxy_actor, class FName CallFunc_Array_Get_Item, bool CallFunc_get_proxy_is_valid_1, int32 CallFunc_get_proxy_found_index_1, class Abp_dlg_proxy_base_C* CallFunc_get_proxy_proxy_actor_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "get_actor");

	Params::AObject_dlg_cinematic_parent_C_Get_actor_Params Parms{};

	Parms.Actor_id = Actor_id;
	Parms.Actor_index = Actor_index;
	Parms.CallFunc_get_proxy_is_valid = CallFunc_get_proxy_is_valid;
	Parms.CallFunc_get_proxy_found_index = CallFunc_get_proxy_found_index;
	Parms.CallFunc_get_proxy_proxy_actor = CallFunc_get_proxy_proxy_actor;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_get_proxy_is_valid_1 = CallFunc_get_proxy_is_valid_1;
	Parms.CallFunc_get_proxy_found_index_1 = CallFunc_get_proxy_found_index_1;
	Parms.CallFunc_get_proxy_proxy_actor_1 = CallFunc_get_proxy_proxy_actor_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Actor_proxy != nullptr)
		*Actor_proxy = Parms.Actor_proxy;

}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.pack_cameras
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return_node                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AObject_dlg_cinematic_parent_C::Pack_cameras(bool* Return_node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "pack_cameras");

	Params::AObject_dlg_cinematic_parent_C_Pack_cameras_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return_node != nullptr)
		*Return_node = Parms.Return_node;

}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.pack_widgets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return_node                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AObject_dlg_cinematic_parent_C::Pack_widgets(bool* Return_node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "pack_widgets");

	Params::AObject_dlg_cinematic_parent_C_Pack_widgets_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return_node != nullptr)
		*Return_node = Parms.Return_node;

}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.pack_actors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return_node                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AObject_dlg_cinematic_parent_C::Pack_actors(bool* Return_node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "pack_actors");

	Params::AObject_dlg_cinematic_parent_C_Pack_actors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return_node != nullptr)
		*Return_node = Parms.Return_node;

}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.call_bind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_pack_widgets_return_node                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_pack_actors_return_node                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_pack_cameras_return_node                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AObject_dlg_cinematic_parent_C::Call_bind(bool CallFunc_pack_widgets_return_node, bool CallFunc_pack_actors_return_node, bool CallFunc_pack_cameras_return_node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "call_bind");

	Params::AObject_dlg_cinematic_parent_C_Call_bind_Params Parms{};

	Parms.CallFunc_pack_widgets_return_node = CallFunc_pack_widgets_return_node;
	Parms.CallFunc_pack_actors_return_node = CallFunc_pack_actors_return_node;
	Parms.CallFunc_pack_cameras_return_node = CallFunc_pack_cameras_return_node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.bind_actor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMovieSceneObjectBindingID  bind_info                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      bind_actor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneObjectBindingID  Local_binding                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AObject_dlg_cinematic_parent_C::bind_actor(const struct FMovieSceneObjectBindingID& bind_info, class AActor* bind_actor, class AActor* Local_actor, const struct FMovieSceneObjectBindingID& Local_binding, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, class FName Temp_name_Variable, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "bind_actor");

	Params::AObject_dlg_cinematic_parent_C_bind_actor_Params Parms{};

	Parms.bind_info = bind_info;
	Parms.bind_actor = bind_actor;
	Parms.Local_actor = Local_actor;
	Parms.Local_binding = Local_binding;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.init_object
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_cinematic_C*         Dlg_cinematic                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Cinematic_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unbind                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AObject_dlg_cinematic_parent_C::Init_object(class Abp_dlg_actor_C* Dlg_actor, class Abp_dlg_cinematic_C* Dlg_cinematic, class FName Cinematic_id, bool Unbind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "init_object");

	Params::AObject_dlg_cinematic_parent_C_Init_object_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_cinematic = Dlg_cinematic;
	Parms.Cinematic_id = Cinematic_id;
	Parms.Unbind = Unbind;

	UObject::ProcessEvent(Func, &Parms);

}


// Function object_dlg_cinematic_parent.object_dlg_cinematic_parent_C.ExecuteUbergraph_object_dlg_cinematic_parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AObject_dlg_cinematic_parent_C::ExecuteUbergraph_object_dlg_cinematic_parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_cinematic_parent_C", "ExecuteUbergraph_object_dlg_cinematic_parent");

	Params::AObject_dlg_cinematic_parent_C_ExecuteUbergraph_object_dlg_cinematic_parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


