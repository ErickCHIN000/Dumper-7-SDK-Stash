#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_dlg_cam.bp_dlg_cam_C
// (Actor)

class UClass* Abp_dlg_cam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_dlg_cam_C");

	return Clss;
}


// bp_dlg_cam_C bp_dlg_cam.Default__bp_dlg_cam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_dlg_cam_C* Abp_dlg_cam_C::GetDefaultObj()
{
	static class Abp_dlg_cam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_dlg_cam_C*>(Abp_dlg_cam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_dlg_cam.bp_dlg_cam_C.get_auto_cam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Latest_cam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Latest_interlocutor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        Random_cam                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Latest_random                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCameraLensSettings         Five0mm_Lens                                                     (Edit, BlueprintVisible, NoDestructor)
// class FName                        Local_latest_interlocutor                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_latest_index                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_random_value                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cam_C::Get_auto_cam(int32 Latest_cam, class FName Latest_interlocutor, class UCineCameraComponent** Random_cam, int32* Latest_random, const struct FCameraLensSettings& Five0mm_Lens, class FName Local_latest_interlocutor, int32 Local_latest_index, int32 Local_random_value, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_5, bool CallFunc_EqualEqual_NameName_ReturnValue_6, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_8, bool CallFunc_EqualEqual_NameName_ReturnValue_9, bool CallFunc_EqualEqual_NameName_ReturnValue_10, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue_11, bool CallFunc_EqualEqual_NameName_ReturnValue_12, bool CallFunc_EqualEqual_NameName_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cam_C", "get_auto_cam");

	Params::Abp_dlg_cam_C_Get_auto_cam_Params Parms{};

	Parms.Latest_cam = Latest_cam;
	Parms.Latest_interlocutor = Latest_interlocutor;
	Parms.Five0mm_Lens = Five0mm_Lens;
	Parms.Local_latest_interlocutor = Local_latest_interlocutor;
	Parms.Local_latest_index = Local_latest_index;
	Parms.Local_random_value = Local_random_value;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_4 = CallFunc_EqualEqual_NameName_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_5 = CallFunc_EqualEqual_NameName_ReturnValue_5;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_6 = CallFunc_EqualEqual_NameName_ReturnValue_6;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_7 = CallFunc_EqualEqual_NameName_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_8 = CallFunc_EqualEqual_NameName_ReturnValue_8;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_9 = CallFunc_EqualEqual_NameName_ReturnValue_9;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_10 = CallFunc_EqualEqual_NameName_ReturnValue_10;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_11 = CallFunc_EqualEqual_NameName_ReturnValue_11;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_12 = CallFunc_EqualEqual_NameName_ReturnValue_12;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_13 = CallFunc_EqualEqual_NameName_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_14 = CallFunc_EqualEqual_NameName_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Random_cam != nullptr)
		*Random_cam = Parms.Random_cam;

	if (Latest_random != nullptr)
		*Latest_random = Parms.Latest_random;

}


// Function bp_dlg_cam.bp_dlg_cam_C.set_active_camera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Camera_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            Camera_component                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_camera_is_valid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_camera_found_index                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_get_camera_camera_component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cam_C::Set_active_camera(class FName Camera_id, class UCameraComponent** Camera_component, bool* Is_valid, int32 Temp_int_Array_Index_Variable, bool CallFunc_get_camera_is_valid, int32 CallFunc_get_camera_found_index, class UCameraComponent* CallFunc_get_camera_camera_component, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCameraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cam_C", "set_active_camera");

	Params::Abp_dlg_cam_C_Set_active_camera_Params Parms{};

	Parms.Camera_id = Camera_id;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_get_camera_is_valid = CallFunc_get_camera_is_valid;
	Parms.CallFunc_get_camera_found_index = CallFunc_get_camera_found_index;
	Parms.CallFunc_get_camera_camera_component = CallFunc_get_camera_camera_component;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Camera_component != nullptr)
		*Camera_component = Parms.Camera_component;

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

}


// Function bp_dlg_cam.bp_dlg_cam_C.get_camera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Camera_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            Camera_component                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_dlg_cam_C::Get_camera(class FName Camera_id, bool* Is_valid, int32* Found_index, class UCameraComponent** Camera_component, int32 CallFunc_Array_Find_ReturnValue, class UCameraComponent* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cam_C", "get_camera");

	Params::Abp_dlg_cam_C_Get_camera_Params Parms{};

	Parms.Camera_id = Camera_id;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Found_index != nullptr)
		*Found_index = Parms.Found_index;

	if (Camera_component != nullptr)
		*Camera_component = Parms.Camera_component;

}


// Function bp_dlg_cam.bp_dlg_cam_C.add_camera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Camera_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            Camera_component                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_camera_is_valid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_camera_found_index                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_get_camera_camera_component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cam_C::Add_camera(class FName Camera_id, class UCameraComponent* Camera_component, bool CallFunc_get_camera_is_valid, int32 CallFunc_get_camera_found_index, class UCameraComponent* CallFunc_get_camera_camera_component, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cam_C", "add_camera");

	Params::Abp_dlg_cam_C_Add_camera_Params Parms{};

	Parms.Camera_id = Camera_id;
	Parms.Camera_component = Camera_component;
	Parms.CallFunc_get_camera_is_valid = CallFunc_get_camera_is_valid;
	Parms.CallFunc_get_camera_found_index = CallFunc_get_camera_found_index;
	Parms.CallFunc_get_camera_camera_component = CallFunc_get_camera_camera_component;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cam.bp_dlg_cam_C.init_interlocutor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Interlocutor_id                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cam_C::Init_interlocutor(class FName Interlocutor_id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cam_C", "init_interlocutor");

	Params::Abp_dlg_cam_C_Init_interlocutor_Params Parms{};

	Parms.Interlocutor_id = Interlocutor_id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_cam.bp_dlg_cam_C.ExecuteUbergraph_bp_dlg_cam
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCameraComponent*>    CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UCameraComponent*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        K2Node_DynamicCast_AsCine_Camera_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCameraTrackingFocusSettingsK2Node_MakeStruct_CameraTrackingFocusSettings                    (None)
// class FName                        K2Node_CustomEvent_interlocutor_id                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_cam_C::ExecuteUbergraph_bp_dlg_cam(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UCameraComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UCameraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FCameraTrackingFocusSettings& K2Node_MakeStruct_CameraTrackingFocusSettings, class FName K2Node_CustomEvent_interlocutor_id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_cam_C", "ExecuteUbergraph_bp_dlg_cam");

	Params::Abp_dlg_cam_C_ExecuteUbergraph_bp_dlg_cam_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsCine_Camera_Component = K2Node_DynamicCast_AsCine_Camera_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeStruct_CameraTrackingFocusSettings = K2Node_MakeStruct_CameraTrackingFocusSettings;
	Parms.K2Node_CustomEvent_interlocutor_id = K2Node_CustomEvent_interlocutor_id;

	UObject::ProcessEvent(Func, &Parms);

}

}


