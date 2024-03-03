#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_dlg_component.bp_dlg_component_C
// (None)

class UClass* Ubp_dlg_component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_dlg_component_C");

	return Clss;
}


// bp_dlg_component_C bp_dlg_component.Default__bp_dlg_component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubp_dlg_component_C* Ubp_dlg_component_C::GetDefaultObj()
{
	static class Ubp_dlg_component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubp_dlg_component_C*>(Ubp_dlg_component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_dlg_component.bp_dlg_component_C.tick_lookat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_get_helper_points_is_valid_data                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_helper_points_found_data_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_get_helper_points_object_list                           (ReferenceParm, ContainsInstancedReference)
// class UPrimitiveComponent*         CallFunc_get_helper_points_primitive_object                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Tick_lookat(bool CallFunc_get_helper_points_is_valid_data, int32 CallFunc_get_helper_points_found_data_index, TArray<class UPrimitiveComponent*>& CallFunc_get_helper_points_object_list, class UPrimitiveComponent* CallFunc_get_helper_points_primitive_object, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "tick_lookat");

	Params::Ubp_dlg_component_C_Tick_lookat_Params Parms{};

	Parms.CallFunc_get_helper_points_is_valid_data = CallFunc_get_helper_points_is_valid_data;
	Parms.CallFunc_get_helper_points_found_data_index = CallFunc_get_helper_points_found_data_index;
	Parms.CallFunc_get_helper_points_object_list = CallFunc_get_helper_points_object_list;
	Parms.CallFunc_get_helper_points_primitive_object = CallFunc_get_helper_points_primitive_object;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_anim_slot_convert
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_dlg_anim_slot      Dlg_anim_slot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Slot_id                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Dlg_anim_slot_convert(enum class Enum_dlg_anim_slot Dlg_anim_slot, class FName* Slot_id, class FName Local_id, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_anim_slot_convert");

	Params::Ubp_dlg_component_C_Dlg_anim_slot_convert_Params Parms{};

	Parms.Dlg_anim_slot = Dlg_anim_slot;
	Parms.Local_id = Local_id;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Slot_id != nullptr)
		*Slot_id = Parms.Slot_id;

}


// Function bp_dlg_component.bp_dlg_component_C.get_layout_widget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_dlg_2d_layout_C*       Layout_widget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_01_dlg_2d_layout_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_dlg_2d_layout_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Get_layout_widget(bool* Is_valid, class UW_01_dlg_2d_layout_C** Layout_widget, TArray<class UW_01_dlg_2d_layout_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_01_dlg_2d_layout_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "get_layout_widget");

	Params::Ubp_dlg_component_C_Get_layout_widget_Params Parms{};

	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Layout_widget != nullptr)
		*Layout_widget = Parms.Layout_widget;

}


// Function bp_dlg_component.bp_dlg_component_C.destroy_dialogues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Destroy_dialogues(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class Abp_dlg_actor_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "destroy_dialogues");

	Params::Ubp_dlg_component_C_Destroy_dialogues_Params Parms{};

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


// Function bp_dlg_component.bp_dlg_component_C.destroy_widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Destroy_widgets(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "destroy_widgets");

	Params::Ubp_dlg_component_C_Destroy_widgets_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_save_info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_identifier_component_is_valid                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*CallFunc_msl_get_identifier_component_identifier_reference       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_id_is_valid                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_get_id_actor_unique_id                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_identifier_component_is_valid_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*CallFunc_msl_get_identifier_component_identifier_reference_1     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_id_is_valid_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_get_id_actor_unique_id_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_identifier_component_is_valid_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*CallFunc_msl_get_identifier_component_identifier_reference_2     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_get_id_is_valid_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_get_id_actor_unique_id_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_savegame_actor_C*    CallFunc_msl_get_savegame_reference_save_actor                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_5                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_6                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_7                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_8                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class Abp_msl_savegame_actor_C*    CallFunc_msl_get_savegame_reference_save_actor_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class Abp_msl_savegame_actor_C*    CallFunc_msl_get_savegame_reference_save_actor_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// struct FS_dlg_savegame             CallFunc_get_save_data_dlg_save                                  (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Dlg_save_info(int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_msl_get_identifier_component_is_valid, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference, class FName CallFunc_Conv_StringToName_ReturnValue_1, bool CallFunc_get_id_is_valid, class FName CallFunc_get_id_actor_unique_id, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, bool CallFunc_msl_get_identifier_component_is_valid_1, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference_1, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_get_id_is_valid_1, class FName CallFunc_get_id_actor_unique_id_1, bool CallFunc_msl_get_identifier_component_is_valid_2, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_get_id_is_valid_2, class FName CallFunc_get_id_actor_unique_id_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_4, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor, const struct FDateTime& CallFunc_Array_Get_Item, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, class FName CallFunc_Array_Get_Item_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_6, const class FString& CallFunc_Conv_IntToString_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, class Abp_dlg_actor_C* CallFunc_Array_Get_Item_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const struct FS_dlg_savegame& CallFunc_get_save_data_dlg_save, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_save_info");

	Params::Ubp_dlg_component_C_Dlg_save_info_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_msl_get_identifier_component_is_valid = CallFunc_msl_get_identifier_component_is_valid;
	Parms.CallFunc_msl_get_identifier_component_identifier_reference = CallFunc_msl_get_identifier_component_identifier_reference;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_get_id_is_valid = CallFunc_get_id_is_valid;
	Parms.CallFunc_get_id_actor_unique_id = CallFunc_get_id_actor_unique_id;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_msl_get_identifier_component_is_valid_1 = CallFunc_msl_get_identifier_component_is_valid_1;
	Parms.CallFunc_msl_get_identifier_component_identifier_reference_1 = CallFunc_msl_get_identifier_component_identifier_reference_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_get_id_is_valid_1 = CallFunc_get_id_is_valid_1;
	Parms.CallFunc_get_id_actor_unique_id_1 = CallFunc_get_id_actor_unique_id_1;
	Parms.CallFunc_msl_get_identifier_component_is_valid_2 = CallFunc_msl_get_identifier_component_is_valid_2;
	Parms.CallFunc_msl_get_identifier_component_identifier_reference_2 = CallFunc_msl_get_identifier_component_identifier_reference_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_get_id_is_valid_2 = CallFunc_get_id_is_valid_2;
	Parms.CallFunc_get_id_actor_unique_id_2 = CallFunc_get_id_actor_unique_id_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_3 = CallFunc_Conv_StringToName_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_4 = CallFunc_Conv_StringToName_ReturnValue_4;
	Parms.CallFunc_msl_get_savegame_reference_save_actor = CallFunc_msl_get_savegame_reference_save_actor;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_3 = CallFunc_Conv_NameToString_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_5 = CallFunc_Conv_IntToString_ReturnValue_5;
	Parms.CallFunc_Conv_IntToString_ReturnValue_6 = CallFunc_Conv_IntToString_ReturnValue_6;
	Parms.CallFunc_Conv_IntToString_ReturnValue_7 = CallFunc_Conv_IntToString_ReturnValue_7;
	Parms.CallFunc_Conv_IntToString_ReturnValue_8 = CallFunc_Conv_IntToString_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_msl_get_savegame_reference_save_actor_1 = CallFunc_msl_get_savegame_reference_save_actor_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_msl_get_savegame_reference_save_actor_2 = CallFunc_msl_get_savegame_reference_save_actor_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_get_save_data_dlg_save = CallFunc_get_save_data_dlg_save;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_load_info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_dlg_savegame>     Local_dlg_list                                                   (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_dlg_savegame             Local_saved_data                                                 (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_identifier_component_is_valid                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*CallFunc_msl_get_identifier_component_identifier_reference       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_id_is_valid                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_get_id_actor_unique_id                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_savegame_actor_C*    CallFunc_msl_get_savegame_reference_save_actor                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ParseOption_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ParseOption_ReturnValue_1                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_6                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_7                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_identifier_component_is_valid_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*CallFunc_msl_get_identifier_component_identifier_reference_1     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_id_is_valid_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_get_id_actor_unique_id_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_savegame             CallFunc_Array_Get_Item_8                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_savegame             CallFunc_Array_Get_Item_9                                        (ContainsInstancedReference, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_dlg_is_spawned                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             CallFunc_add_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_savegame_actor_C*    CallFunc_msl_get_savegame_reference_save_actor_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_is_valid_root_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_key_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_var_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_var_data_found_root_index_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_key_index_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_var_index_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_get_saved_var_data_found_var_list_1                     (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            CallFunc_get_saved_var_data_found_var_info_1                     (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_found_var_instanced_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Dlg_load_info(const TArray<struct FS_dlg_savegame>& Local_dlg_list, const struct FS_dlg_savegame& Local_saved_data, class Abp_dlg_actor_C* Local_actor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_msl_get_identifier_component_is_valid, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference, bool CallFunc_get_id_is_valid, class FName CallFunc_get_id_actor_unique_id, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_ParseOption_ReturnValue, const class FString& CallFunc_ParseOption_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_3, const class FString& CallFunc_Array_Get_Item_4, int32 CallFunc_Conv_StringToInt_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue_3, const class FString& CallFunc_Array_Get_Item_5, const class FString& CallFunc_Array_Get_Item_6, int32 CallFunc_Conv_StringToInt_ReturnValue_4, int32 CallFunc_Conv_StringToInt_ReturnValue_5, const class FString& CallFunc_Array_Get_Item_7, int32 CallFunc_Conv_StringToInt_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable_1, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_msl_get_identifier_component_is_valid_1, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference_1, bool CallFunc_get_id_is_valid_1, class FName CallFunc_get_id_actor_unique_id_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, const struct FS_dlg_savegame& CallFunc_Array_Get_Item_8, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_dlg_savegame& CallFunc_Array_Get_Item_9, class Abp_dlg_actor_C* CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, int32 Temp_int_Loop_Counter_Variable_2, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor_1, bool CallFunc_get_saved_var_data_is_valid_root_1, bool CallFunc_get_saved_var_data_is_valid_key_1, bool CallFunc_get_saved_var_data_is_valid_var_1, int32 CallFunc_get_saved_var_data_found_root_index_1, int32 CallFunc_get_saved_var_data_found_key_index_1, int32 CallFunc_get_saved_var_data_found_var_index_1, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list_1, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info_1, bool CallFunc_get_saved_var_data_found_var_instanced_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_load_info");

	Params::Ubp_dlg_component_C_Dlg_load_info_Params Parms{};

	Parms.Local_dlg_list = Local_dlg_list;
	Parms.Local_saved_data = Local_saved_data;
	Parms.Local_actor = Local_actor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_msl_get_identifier_component_is_valid = CallFunc_msl_get_identifier_component_is_valid;
	Parms.CallFunc_msl_get_identifier_component_identifier_reference = CallFunc_msl_get_identifier_component_identifier_reference;
	Parms.CallFunc_get_id_is_valid = CallFunc_get_id_is_valid;
	Parms.CallFunc_get_id_actor_unique_id = CallFunc_get_id_actor_unique_id;
	Parms.CallFunc_msl_get_savegame_reference_save_actor = CallFunc_msl_get_savegame_reference_save_actor;
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
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_ParseOption_ReturnValue = CallFunc_ParseOption_ReturnValue;
	Parms.CallFunc_ParseOption_ReturnValue_1 = CallFunc_ParseOption_ReturnValue_1;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_2 = CallFunc_Conv_StringToInt_ReturnValue_2;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_3 = CallFunc_Conv_StringToInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_4 = CallFunc_Conv_StringToInt_ReturnValue_4;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_5 = CallFunc_Conv_StringToInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_6 = CallFunc_Conv_StringToInt_ReturnValue_6;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_msl_get_identifier_component_is_valid_1 = CallFunc_msl_get_identifier_component_is_valid_1;
	Parms.CallFunc_msl_get_identifier_component_identifier_reference_1 = CallFunc_msl_get_identifier_component_identifier_reference_1;
	Parms.CallFunc_get_id_is_valid_1 = CallFunc_get_id_is_valid_1;
	Parms.CallFunc_get_id_actor_unique_id_1 = CallFunc_get_id_actor_unique_id_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_add_dlg_is_valid = CallFunc_add_dlg_is_valid;
	Parms.CallFunc_add_dlg_is_spawned = CallFunc_add_dlg_is_spawned;
	Parms.CallFunc_add_dlg_dlg_actor = CallFunc_add_dlg_dlg_actor;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_msl_get_savegame_reference_save_actor_1 = CallFunc_msl_get_savegame_reference_save_actor_1;
	Parms.CallFunc_get_saved_var_data_is_valid_root_1 = CallFunc_get_saved_var_data_is_valid_root_1;
	Parms.CallFunc_get_saved_var_data_is_valid_key_1 = CallFunc_get_saved_var_data_is_valid_key_1;
	Parms.CallFunc_get_saved_var_data_is_valid_var_1 = CallFunc_get_saved_var_data_is_valid_var_1;
	Parms.CallFunc_get_saved_var_data_found_root_index_1 = CallFunc_get_saved_var_data_found_root_index_1;
	Parms.CallFunc_get_saved_var_data_found_key_index_1 = CallFunc_get_saved_var_data_found_key_index_1;
	Parms.CallFunc_get_saved_var_data_found_var_index_1 = CallFunc_get_saved_var_data_found_var_index_1;
	Parms.CallFunc_get_saved_var_data_found_var_list_1 = CallFunc_get_saved_var_data_found_var_list_1;
	Parms.CallFunc_get_saved_var_data_found_var_info_1 = CallFunc_get_saved_var_data_found_var_info_1;
	Parms.CallFunc_get_saved_var_data_found_var_instanced_1 = CallFunc_get_saved_var_data_found_var_instanced_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.get_dlg_history
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Dlg_unique_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   Latest_time                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Get_dlg_history(class FName Dlg_unique_id, bool* Is_valid, int32* Found_index, struct FDateTime* Latest_time, int32 CallFunc_Array_Find_ReturnValue, const struct FDateTime& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "get_dlg_history");

	Params::Ubp_dlg_component_C_Get_dlg_history_Params Parms{};

	Parms.Dlg_unique_id = Dlg_unique_id;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Found_index != nullptr)
		*Found_index = Parms.Found_index;

	if (Latest_time != nullptr)
		*Latest_time = std::move(Parms.Latest_time);

}


// Function bp_dlg_component.bp_dlg_component_C.remove_helper_points
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Helper_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove_all                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_helper_points_is_valid_data                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_helper_points_found_data_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_get_helper_points_object_list                           (ReferenceParm, ContainsInstancedReference)
// class UPrimitiveComponent*         CallFunc_get_helper_points_primitive_object                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Remove_helper_points(class FName Helper_id, bool Remove_all, bool CallFunc_get_helper_points_is_valid_data, int32 CallFunc_get_helper_points_found_data_index, TArray<class UPrimitiveComponent*>& CallFunc_get_helper_points_object_list, class UPrimitiveComponent* CallFunc_get_helper_points_primitive_object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "remove_helper_points");

	Params::Ubp_dlg_component_C_Remove_helper_points_Params Parms{};

	Parms.Helper_id = Helper_id;
	Parms.Remove_all = Remove_all;
	Parms.CallFunc_get_helper_points_is_valid_data = CallFunc_get_helper_points_is_valid_data;
	Parms.CallFunc_get_helper_points_found_data_index = CallFunc_get_helper_points_found_data_index;
	Parms.CallFunc_get_helper_points_object_list = CallFunc_get_helper_points_object_list;
	Parms.CallFunc_get_helper_points_primitive_object = CallFunc_get_helper_points_primitive_object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.get_helper_points
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Helper_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Point_index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid_data                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_data_index                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> Object_list                                                      (Parm, OutParm, ContainsInstancedReference)
// class UPrimitiveComponent*         Primitive_object                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_helper_info          CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Get_helper_points(class FName Helper_id, int32 Point_index, bool* Is_valid_data, int32* Found_data_index, TArray<class UPrimitiveComponent*>* Object_list, class UPrimitiveComponent** Primitive_object, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_dlg_helper_info& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "get_helper_points");

	Params::Ubp_dlg_component_C_Get_helper_points_Params Parms{};

	Parms.Helper_id = Helper_id;
	Parms.Point_index = Point_index;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid_data != nullptr)
		*Is_valid_data = Parms.Is_valid_data;

	if (Found_data_index != nullptr)
		*Found_data_index = Parms.Found_data_index;

	if (Object_list != nullptr)
		*Object_list = std::move(Parms.Object_list);

	if (Primitive_object != nullptr)
		*Primitive_object = Parms.Primitive_object;

}


// Function bp_dlg_component.bp_dlg_component_C.set_helper_points
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Helper_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> Helper_list                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FS_dlg_helper_info          K2Node_MakeStruct_s_dlg_helper_info                              (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_dlg_helper_info          K2Node_MakeStruct_s_dlg_helper_info_1                            (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_helper_points_is_valid_data                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_helper_points_found_data_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_get_helper_points_object_list                           (ReferenceParm, ContainsInstancedReference)
// class UPrimitiveComponent*         CallFunc_get_helper_points_primitive_object                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Set_helper_points(class FName Helper_id, TArray<class UPrimitiveComponent*>& Helper_list, const struct FS_dlg_helper_info& K2Node_MakeStruct_s_dlg_helper_info, const struct FS_dlg_helper_info& K2Node_MakeStruct_s_dlg_helper_info_1, bool CallFunc_get_helper_points_is_valid_data, int32 CallFunc_get_helper_points_found_data_index, TArray<class UPrimitiveComponent*>& CallFunc_get_helper_points_object_list, class UPrimitiveComponent* CallFunc_get_helper_points_primitive_object, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "set_helper_points");

	Params::Ubp_dlg_component_C_Set_helper_points_Params Parms{};

	Parms.Helper_id = Helper_id;
	Parms.Helper_list = Helper_list;
	Parms.K2Node_MakeStruct_s_dlg_helper_info = K2Node_MakeStruct_s_dlg_helper_info;
	Parms.K2Node_MakeStruct_s_dlg_helper_info_1 = K2Node_MakeStruct_s_dlg_helper_info_1;
	Parms.CallFunc_get_helper_points_is_valid_data = CallFunc_get_helper_points_is_valid_data;
	Parms.CallFunc_get_helper_points_found_data_index = CallFunc_get_helper_points_found_data_index;
	Parms.CallFunc_get_helper_points_object_list = CallFunc_get_helper_points_object_list;
	Parms.CallFunc_get_helper_points_primitive_object = CallFunc_get_helper_points_primitive_object;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_consume_lookat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_anim_lookat          Lookat_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_anim_lookat          Local_lookat                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Local_dlg_actor                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_actor_is_valid                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_dlg_actor_is_component_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_actor_actor_index                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_get_dlg_actor_actor_reference                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_dlg_component_C*         CallFunc_get_dlg_actor_dlg_component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_bind_actor_info      CallFunc_get_dlg_actor_actor_dynamic                             (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_helper_points_is_valid_data                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_helper_points_found_data_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_get_helper_points_object_list                           (ReferenceParm, ContainsInstancedReference)
// class UPrimitiveComponent*         CallFunc_get_helper_points_primitive_object                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Dlg_consume_lookat(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_anim_lookat& Lookat_data, const struct FS_dlg_anim_lookat& Local_lookat, class Abp_dlg_actor_C* Local_dlg_actor, bool CallFunc_get_dlg_actor_is_valid, bool CallFunc_get_dlg_actor_is_component_valid, int32 CallFunc_get_dlg_actor_actor_index, class AActor* CallFunc_get_dlg_actor_actor_reference, class Ubp_dlg_component_C* CallFunc_get_dlg_actor_dlg_component, const struct FS_dlg_bind_actor_info& CallFunc_get_dlg_actor_actor_dynamic, bool CallFunc_get_helper_points_is_valid_data, int32 CallFunc_get_helper_points_found_data_index, TArray<class UPrimitiveComponent*>& CallFunc_get_helper_points_object_list, class UPrimitiveComponent* CallFunc_get_helper_points_primitive_object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_consume_lookat");

	Params::Ubp_dlg_component_C_Dlg_consume_lookat_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Lookat_data = Lookat_data;
	Parms.Local_lookat = Local_lookat;
	Parms.Local_dlg_actor = Local_dlg_actor;
	Parms.CallFunc_get_dlg_actor_is_valid = CallFunc_get_dlg_actor_is_valid;
	Parms.CallFunc_get_dlg_actor_is_component_valid = CallFunc_get_dlg_actor_is_component_valid;
	Parms.CallFunc_get_dlg_actor_actor_index = CallFunc_get_dlg_actor_actor_index;
	Parms.CallFunc_get_dlg_actor_actor_reference = CallFunc_get_dlg_actor_actor_reference;
	Parms.CallFunc_get_dlg_actor_dlg_component = CallFunc_get_dlg_actor_dlg_component;
	Parms.CallFunc_get_dlg_actor_actor_dynamic = CallFunc_get_dlg_actor_actor_dynamic;
	Parms.CallFunc_get_helper_points_is_valid_data = CallFunc_get_helper_points_is_valid_data;
	Parms.CallFunc_get_helper_points_found_data_index = CallFunc_get_helper_points_found_data_index;
	Parms.CallFunc_get_helper_points_object_list = CallFunc_get_helper_points_object_list;
	Parms.CallFunc_get_helper_points_primitive_object = CallFunc_get_helper_points_primitive_object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.set_mesh_list
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>Mesh_list                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void Ubp_dlg_component_C::Set_mesh_list(TArray<class USkeletalMeshComponent*>& Mesh_list)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "set_mesh_list");

	Params::Ubp_dlg_component_C_Set_mesh_list_Params Parms{};

	Parms.Mesh_list = Mesh_list;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_name_timer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubp_dlg_component_C::Dlg_name_timer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_name_timer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_show_name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_visible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_forced                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_tick                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_tick                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_forced                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_visible                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_check_name_visible_is_success                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Dlg_show_name(bool Is_visible, bool Is_forced, bool Is_tick, bool Local_tick, bool Local_forced, bool Local_visible, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_check_name_visible_is_success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_show_name");

	Params::Ubp_dlg_component_C_Dlg_show_name_Params Parms{};

	Parms.Is_visible = Is_visible;
	Parms.Is_forced = Is_forced;
	Parms.Is_tick = Is_tick;
	Parms.Local_tick = Local_tick;
	Parms.Local_forced = Local_forced;
	Parms.Local_visible = Local_visible;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_check_name_visible_is_success = CallFunc_check_name_visible_is_success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.check_name_visible
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_success                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Check_name_visible(bool* Is_success, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "check_name_visible");

	Params::Ubp_dlg_component_C_Check_name_visible_Params Parms{};

	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_success != nullptr)
		*Is_success = Parms.Is_success;

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_consume_anim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_anim_info            Anim_data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UAnimInstance*               Local_anim_instance                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_anim_info            Local_anim_info                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Local_dlg_actor                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_dlg_anim_slot_convert_slot_id                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_dlg_anim_slot_convert_slot_id_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Dlg_consume_anim(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_anim_info& Anim_data, class UAnimInstance* Local_anim_instance, const struct FS_dlg_anim_info& Local_anim_info, class Abp_dlg_actor_C* Local_dlg_actor, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Montage_Play_ReturnValue, class FName CallFunc_dlg_anim_slot_convert_slot_id, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_dlg_anim_slot_convert_slot_id_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_consume_anim");

	Params::Ubp_dlg_component_C_Dlg_consume_anim_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Anim_data = Anim_data;
	Parms.Local_anim_instance = Local_anim_instance;
	Parms.Local_anim_info = Local_anim_info;
	Parms.Local_dlg_actor = Local_dlg_actor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_dlg_anim_slot_convert_slot_id = CallFunc_dlg_anim_slot_convert_slot_id;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_dlg_anim_slot_convert_slot_id_1 = CallFunc_dlg_anim_slot_convert_slot_id_1;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.remove_dlg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Dlg_unique_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_destroyed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_destroyed                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_found_index                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Remove_dlg(class FName Dlg_unique_id, bool Is_destroyed, class Abp_dlg_actor_C* Local_actor, bool Local_destroyed, int32 Local_index, class FName Local_id, bool CallFunc_get_dlg_is_valid, int32 CallFunc_get_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "remove_dlg");

	Params::Ubp_dlg_component_C_Remove_dlg_Params Parms{};

	Parms.Dlg_unique_id = Dlg_unique_id;
	Parms.Is_destroyed = Is_destroyed;
	Parms.Local_actor = Local_actor;
	Parms.Local_destroyed = Local_destroyed;
	Parms.Local_index = Local_index;
	Parms.Local_id = Local_id;
	Parms.CallFunc_get_dlg_is_valid = CallFunc_get_dlg_is_valid;
	Parms.CallFunc_get_dlg_found_index = CallFunc_get_dlg_found_index;
	Parms.CallFunc_get_dlg_dlg_actor = CallFunc_get_dlg_dlg_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.get_dlg
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Dlg_unique_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Dlg_actor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Get_dlg(class FName Dlg_unique_id, bool* Is_valid, int32* Found_index, class Abp_dlg_actor_C** Dlg_actor, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class Abp_dlg_actor_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "get_dlg");

	Params::Ubp_dlg_component_C_Get_dlg_Params Parms{};

	Parms.Dlg_unique_id = Dlg_unique_id;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Found_index != nullptr)
		*Found_index = Parms.Found_index;

	if (Dlg_actor != nullptr)
		*Dlg_actor = Parms.Dlg_actor;

}


// Function bp_dlg_component.bp_dlg_component_C.add_dlg
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Dlg_unique_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Dlg_data_id                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_bind_actor_settings  Dlg_actors                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_start_dynamic_info   Dlg_dynamic                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Dlg_destroy_on_finish                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_spawned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             Dlg_actor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_destroy                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_data_id                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_bind_actor_settings  Local_actors                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FS_dlg_start_dynamic_info   Local_dynamic                                                    (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_unique_id                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_history_is_valid                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_history_found_index                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_get_dlg_history_latest_time                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_found_index                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Add_dlg(class FName Dlg_unique_id, class FName Dlg_data_id, const struct FS_dlg_bind_actor_settings& Dlg_actors, const struct FS_dlg_start_dynamic_info& Dlg_dynamic, bool Dlg_destroy_on_finish, bool* Is_valid, bool* Is_spawned, class Abp_dlg_actor_C** Dlg_actor, bool Local_destroy, class FName Local_data_id, const struct FS_dlg_bind_actor_settings& Local_actors, const struct FS_dlg_start_dynamic_info& Local_dynamic, class Abp_dlg_actor_C* Local_actor, class FName Local_unique_id, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, class Abp_dlg_actor_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_1, bool CallFunc_get_dlg_history_is_valid, int32 CallFunc_get_dlg_history_found_index, const struct FDateTime& CallFunc_get_dlg_history_latest_time, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_get_dlg_is_valid, int32 CallFunc_get_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "add_dlg");

	Params::Ubp_dlg_component_C_Add_dlg_Params Parms{};

	Parms.Dlg_unique_id = Dlg_unique_id;
	Parms.Dlg_data_id = Dlg_data_id;
	Parms.Dlg_actors = Dlg_actors;
	Parms.Dlg_dynamic = Dlg_dynamic;
	Parms.Dlg_destroy_on_finish = Dlg_destroy_on_finish;
	Parms.Local_destroy = Local_destroy;
	Parms.Local_data_id = Local_data_id;
	Parms.Local_actors = Local_actors;
	Parms.Local_dynamic = Local_dynamic;
	Parms.Local_actor = Local_actor;
	Parms.Local_unique_id = Local_unique_id;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Now_ReturnValue_1 = CallFunc_Now_ReturnValue_1;
	Parms.CallFunc_get_dlg_history_is_valid = CallFunc_get_dlg_history_is_valid;
	Parms.CallFunc_get_dlg_history_found_index = CallFunc_get_dlg_history_found_index;
	Parms.CallFunc_get_dlg_history_latest_time = CallFunc_get_dlg_history_latest_time;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_get_dlg_is_valid = CallFunc_get_dlg_is_valid;
	Parms.CallFunc_get_dlg_found_index = CallFunc_get_dlg_found_index;
	Parms.CallFunc_get_dlg_dlg_actor = CallFunc_get_dlg_dlg_actor;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Is_spawned != nullptr)
		*Is_spawned = Parms.Is_spawned;

	if (Dlg_actor != nullptr)
		*Dlg_actor = Parms.Dlg_actor;

}


// Function bp_dlg_component.bp_dlg_component_C.remove_active_dlg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Dlg_unique_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_active_dlg_is_valid                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_active_dlg_found_index                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_active_dlg_dlg_actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Remove_active_dlg(class FName Dlg_unique_id, class Abp_dlg_actor_C* Local_actor, int32 Local_index, class FName Local_id, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_get_active_dlg_is_valid, int32 CallFunc_get_active_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_active_dlg_dlg_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "remove_active_dlg");

	Params::Ubp_dlg_component_C_Remove_active_dlg_Params Parms{};

	Parms.Dlg_unique_id = Dlg_unique_id;
	Parms.Local_actor = Local_actor;
	Parms.Local_index = Local_index;
	Parms.Local_id = Local_id;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_get_active_dlg_is_valid = CallFunc_get_active_dlg_is_valid;
	Parms.CallFunc_get_active_dlg_found_index = CallFunc_get_active_dlg_found_index;
	Parms.CallFunc_get_active_dlg_dlg_actor = CallFunc_get_active_dlg_dlg_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.get_active_dlg
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Dlg_unique_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Dlg_actor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Get_active_dlg(class FName Dlg_unique_id, bool* Is_valid, int32* Found_index, class Abp_dlg_actor_C** Dlg_actor, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class Abp_dlg_actor_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "get_active_dlg");

	Params::Ubp_dlg_component_C_Get_active_dlg_Params Parms{};

	Parms.Dlg_unique_id = Dlg_unique_id;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Found_index != nullptr)
		*Found_index = Parms.Found_index;

	if (Dlg_actor != nullptr)
		*Dlg_actor = Parms.Dlg_actor;

}


// Function bp_dlg_component.bp_dlg_component_C.add_active_dlg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Dlg_unique_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_active_dlg_is_valid                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_active_dlg_found_index                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_active_dlg_dlg_actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_history_is_valid                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_history_found_index                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_get_dlg_history_latest_time                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Add_active_dlg(class FName Dlg_unique_id, class Abp_dlg_actor_C* Dlg_actor, class Abp_dlg_actor_C* Local_actor, class FName Local_id, const struct FDateTime& CallFunc_Now_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_get_active_dlg_is_valid, int32 CallFunc_get_active_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_active_dlg_dlg_actor, bool CallFunc_get_dlg_history_is_valid, int32 CallFunc_get_dlg_history_found_index, const struct FDateTime& CallFunc_get_dlg_history_latest_time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "add_active_dlg");

	Params::Ubp_dlg_component_C_Add_active_dlg_Params Parms{};

	Parms.Dlg_unique_id = Dlg_unique_id;
	Parms.Dlg_actor = Dlg_actor;
	Parms.Local_actor = Local_actor;
	Parms.Local_id = Local_id;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_get_active_dlg_is_valid = CallFunc_get_active_dlg_is_valid;
	Parms.CallFunc_get_active_dlg_found_index = CallFunc_get_active_dlg_found_index;
	Parms.CallFunc_get_active_dlg_dlg_actor = CallFunc_get_active_dlg_dlg_actor;
	Parms.CallFunc_get_dlg_history_is_valid = CallFunc_get_dlg_history_is_valid;
	Parms.CallFunc_get_dlg_history_found_index = CallFunc_get_dlg_history_found_index;
	Parms.CallFunc_get_dlg_history_latest_time = CallFunc_get_dlg_history_latest_time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_consume_notify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_notify_info          Notify_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_notify_info          Local_notify_data                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Dlg_consume_notify(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_notify_info& Notify_data, const struct FS_dlg_notify_info& Local_notify_data, class Abp_dlg_actor_C* Local_actor, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_consume_notify");

	Params::Ubp_dlg_component_C_Dlg_consume_notify_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Notify_data = Notify_data;
	Parms.Local_notify_data = Local_notify_data;
	Parms.Local_actor = Local_actor;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.init_dlg_component
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_get_helper_points_is_valid_data                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_helper_points_found_data_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_get_helper_points_object_list                           (ReferenceParm, ContainsInstancedReference)
// class UPrimitiveComponent*         CallFunc_get_helper_points_primitive_object                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_subtitles_widget_3d_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Init_dlg_component(bool CallFunc_get_helper_points_is_valid_data, int32 CallFunc_get_helper_points_found_data_index, TArray<class UPrimitiveComponent*>& CallFunc_get_helper_points_object_list, class UPrimitiveComponent* CallFunc_get_helper_points_primitive_object, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_dlg_subtitles_widget_3d_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "init_dlg_component");

	Params::Ubp_dlg_component_C_Init_dlg_component_Params Parms{};

	Parms.CallFunc_get_helper_points_is_valid_data = CallFunc_get_helper_points_is_valid_data;
	Parms.CallFunc_get_helper_points_found_data_index = CallFunc_get_helper_points_found_data_index;
	Parms.CallFunc_get_helper_points_object_list = CallFunc_get_helper_points_object_list;
	Parms.CallFunc_get_helper_points_primitive_object = CallFunc_get_helper_points_primitive_object;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.disable_player_input
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable_input                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       Local_pawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_disable_input                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Disable_player_input(bool Disable_input, class APawn* Local_pawn, bool Local_disable_input, bool CallFunc_IsPlayerControlled_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "disable_player_input");

	Params::Ubp_dlg_component_C_Disable_player_input_Params Parms{};

	Parms.Disable_input = Disable_input;
	Parms.Local_pawn = Local_pawn;
	Parms.Local_disable_input = Local_disable_input;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.disable_character_movement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable_char_movement                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  Local_character                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* Local_char_movement                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_disable                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFindFloorResult            CallFunc_K2_FindFloor_FloorResult                                (NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Disable_character_movement(bool Disable_char_movement, class ACharacter* Local_character, class UCharacterMovementComponent* Local_char_movement, bool Local_disable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FFindFloorResult& CallFunc_K2_FindFloor_FloorResult, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "disable_character_movement");

	Params::Ubp_dlg_component_C_Disable_character_movement_Params Parms{};

	Parms.Disable_char_movement = Disable_char_movement;
	Parms.Local_character = Local_character;
	Parms.Local_char_movement = Local_char_movement;
	Parms.Local_disable = Local_disable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_FindFloor_FloorResult = CallFunc_K2_FindFloor_FloorResult;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_call_notify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_notify_info          Notify_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Dlg_call_notify(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_notify_info& Notify_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_call_notify");

	Params::Ubp_dlg_component_C_Dlg_call_notify_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Notify_data = Notify_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_call_branch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Dlg_old_branch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Dlg_new_branch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Dlg_call_branch(class Abp_dlg_actor_C* Dlg_actor, class FName Dlg_old_branch, class FName Dlg_new_branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_call_branch");

	Params::Ubp_dlg_component_C_Dlg_call_branch_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_old_branch = Dlg_old_branch;
	Parms.Dlg_new_branch = Dlg_new_branch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.receive_anim_cinematic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Cinematic_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Use_cinematic_anim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Receive_anim_cinematic(class Abp_dlg_actor_C* Dlg_actor, class FName Cinematic_id, bool Use_cinematic_anim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "receive_anim_cinematic");

	Params::Ubp_dlg_component_C_Receive_anim_cinematic_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Cinematic_id = Cinematic_id;
	Parms.Use_cinematic_anim = Use_cinematic_anim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.receive_anim_base
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_anim_info            Anim_data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Ubp_dlg_component_C::Receive_anim_base(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_anim_info& Anim_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "receive_anim_base");

	Params::Ubp_dlg_component_C_Receive_anim_base_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Anim_data = Anim_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void Ubp_dlg_component_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_call_start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          Dlg_status                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Dlg_call_start(class Abp_dlg_actor_C* Dlg_actor, enum class Enum_dlg_start Dlg_status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_call_start");

	Params::Ubp_dlg_component_C_Dlg_call_start_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_status = Dlg_status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_call_reply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reply_started                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_reply_data           Reply_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_reply_info           Reply_info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Ubp_dlg_component_C::Dlg_call_reply(class Abp_dlg_actor_C* Dlg_actor, bool Reply_started, const struct FS_dlg_reply_data& Reply_data, const struct FS_dlg_reply_info& Reply_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_call_reply");

	Params::Ubp_dlg_component_C_Dlg_call_reply_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Reply_started = Reply_started;
	Parms.Reply_data = Reply_data;
	Parms.Reply_info = Reply_info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_call_choice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_data   Choice_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Ubp_dlg_component_C::Dlg_call_choice(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_branch_choice_data& Choice_data, const struct FS_dlg_branch_choice_info& Choice_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_call_choice");

	Params::Ubp_dlg_component_C_Dlg_call_choice_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Choice_data = Choice_data;
	Parms.Choice_info = Choice_info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ReceiveEndPlay");

	Params::Ubp_dlg_component_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_call_interact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Instigator_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator_actor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Dlg_call_interact(class FName Instigator_id, class AActor* Instigator_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_call_interact");

	Params::Ubp_dlg_component_C_Dlg_call_interact_Params Parms{};

	Parms.Instigator_id = Instigator_id;
	Parms.Instigator_actor = Instigator_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ReceiveTick");

	Params::Ubp_dlg_component_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.receive_anim_lookat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_anim_lookat          Lookat_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Receive_anim_lookat(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_anim_lookat& Lookat_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "receive_anim_lookat");

	Params::Ubp_dlg_component_C_Receive_anim_lookat_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Lookat_data = Lookat_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_call_distance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_distance_far                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Dlg_call_distance(class Abp_dlg_actor_C* Dlg_actor, bool Is_distance_far)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_call_distance");

	Params::Ubp_dlg_component_C_Dlg_call_distance_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Is_distance_far = Is_distance_far;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.receive_anim_sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reply_started                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Reply_line                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Reply_time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  Reply_sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Receive_anim_sound(class Abp_dlg_actor_C* Dlg_actor, bool Reply_started, class FName Reply_line, float Reply_time, class USoundWave* Reply_sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "receive_anim_sound");

	Params::Ubp_dlg_component_C_Receive_anim_sound_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Reply_started = Reply_started;
	Parms.Reply_line = Reply_line;
	Parms.Reply_time = Reply_time;
	Parms.Reply_sound = Reply_sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.dlg_call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Dlg_event                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Dlg_call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Dlg_event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "dlg_call_event");

	Params::Ubp_dlg_component_C_Dlg_call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_event = Dlg_event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ExecuteUbergraph_bp_dlg_component
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_notify_info          K2Node_CustomEvent_notify_data                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_dlg_get_dlg_component_is_valid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_dlg_component_C*         CallFunc_dlg_get_dlg_component_dlg_reference                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_dlg_old_branch                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_dlg_new_branch                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_cinematic_id                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_use_cinematic_anim                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_anim_info            K2Node_CustomEvent_anim_data                                     (HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          K2Node_CustomEvent_dlg_status                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_reply_started_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_reply_data           K2Node_CustomEvent_reply_data                                    (HasGetValueTypeHash)
// struct FS_dlg_reply_info           K2Node_CustomEvent_reply_info                                    (HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_data   K2Node_CustomEvent_choice_data                                   (HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   K2Node_CustomEvent_choice_info                                   (HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_instigator_id                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_instigator_actor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_anim_lookat          K2Node_CustomEvent_lookat_data                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_is_distance_far                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_reply_started                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_reply_line                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_reply_time                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  K2Node_CustomEvent_reply_sound                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_CustomEvent_dlg_event                                     (ZeroConstructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::ExecuteUbergraph_bp_dlg_component(int32 EntryPoint, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_10, const struct FS_dlg_notify_info& K2Node_CustomEvent_notify_data, bool CallFunc_dlg_get_dlg_component_is_valid, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_9, class FName K2Node_CustomEvent_dlg_old_branch, class FName K2Node_CustomEvent_dlg_new_branch, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_8, class FName K2Node_CustomEvent_cinematic_id, bool K2Node_CustomEvent_use_cinematic_anim, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_7, const struct FS_dlg_anim_info& K2Node_CustomEvent_anim_data, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_6, enum class Enum_dlg_start K2Node_CustomEvent_dlg_status, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_5, bool K2Node_CustomEvent_reply_started_1, const struct FS_dlg_reply_data& K2Node_CustomEvent_reply_data, const struct FS_dlg_reply_info& K2Node_CustomEvent_reply_info, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_4, const struct FS_dlg_branch_choice_data& K2Node_CustomEvent_choice_data, const struct FS_dlg_branch_choice_info& K2Node_CustomEvent_choice_info, enum class EEndPlayReason K2Node_Event_EndPlayReason, class FName K2Node_CustomEvent_instigator_id, class AActor* K2Node_CustomEvent_instigator_actor, float K2Node_Event_DeltaSeconds, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_3, const struct FS_dlg_anim_lookat& K2Node_CustomEvent_lookat_data, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_2, bool K2Node_CustomEvent_is_distance_far, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_1, bool K2Node_CustomEvent_reply_started, class FName K2Node_CustomEvent_reply_line, float K2Node_CustomEvent_reply_time, class USoundWave* K2Node_CustomEvent_reply_sound, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor, const struct FS_dlg_event_info& K2Node_CustomEvent_dlg_event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ExecuteUbergraph_bp_dlg_component");

	Params::Ubp_dlg_component_C_ExecuteUbergraph_bp_dlg_component_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.K2Node_CustomEvent_dlg_actor_10 = K2Node_CustomEvent_dlg_actor_10;
	Parms.K2Node_CustomEvent_notify_data = K2Node_CustomEvent_notify_data;
	Parms.CallFunc_dlg_get_dlg_component_is_valid = CallFunc_dlg_get_dlg_component_is_valid;
	Parms.CallFunc_dlg_get_dlg_component_dlg_reference = CallFunc_dlg_get_dlg_component_dlg_reference;
	Parms.K2Node_CustomEvent_dlg_actor_9 = K2Node_CustomEvent_dlg_actor_9;
	Parms.K2Node_CustomEvent_dlg_old_branch = K2Node_CustomEvent_dlg_old_branch;
	Parms.K2Node_CustomEvent_dlg_new_branch = K2Node_CustomEvent_dlg_new_branch;
	Parms.K2Node_CustomEvent_dlg_actor_8 = K2Node_CustomEvent_dlg_actor_8;
	Parms.K2Node_CustomEvent_cinematic_id = K2Node_CustomEvent_cinematic_id;
	Parms.K2Node_CustomEvent_use_cinematic_anim = K2Node_CustomEvent_use_cinematic_anim;
	Parms.K2Node_CustomEvent_dlg_actor_7 = K2Node_CustomEvent_dlg_actor_7;
	Parms.K2Node_CustomEvent_anim_data = K2Node_CustomEvent_anim_data;
	Parms.K2Node_CustomEvent_dlg_actor_6 = K2Node_CustomEvent_dlg_actor_6;
	Parms.K2Node_CustomEvent_dlg_status = K2Node_CustomEvent_dlg_status;
	Parms.K2Node_CustomEvent_dlg_actor_5 = K2Node_CustomEvent_dlg_actor_5;
	Parms.K2Node_CustomEvent_reply_started_1 = K2Node_CustomEvent_reply_started_1;
	Parms.K2Node_CustomEvent_reply_data = K2Node_CustomEvent_reply_data;
	Parms.K2Node_CustomEvent_reply_info = K2Node_CustomEvent_reply_info;
	Parms.K2Node_CustomEvent_dlg_actor_4 = K2Node_CustomEvent_dlg_actor_4;
	Parms.K2Node_CustomEvent_choice_data = K2Node_CustomEvent_choice_data;
	Parms.K2Node_CustomEvent_choice_info = K2Node_CustomEvent_choice_info;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CustomEvent_instigator_id = K2Node_CustomEvent_instigator_id;
	Parms.K2Node_CustomEvent_instigator_actor = K2Node_CustomEvent_instigator_actor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_dlg_actor_3 = K2Node_CustomEvent_dlg_actor_3;
	Parms.K2Node_CustomEvent_lookat_data = K2Node_CustomEvent_lookat_data;
	Parms.K2Node_CustomEvent_dlg_actor_2 = K2Node_CustomEvent_dlg_actor_2;
	Parms.K2Node_CustomEvent_is_distance_far = K2Node_CustomEvent_is_distance_far;
	Parms.K2Node_CustomEvent_dlg_actor_1 = K2Node_CustomEvent_dlg_actor_1;
	Parms.K2Node_CustomEvent_reply_started = K2Node_CustomEvent_reply_started;
	Parms.K2Node_CustomEvent_reply_line = K2Node_CustomEvent_reply_line;
	Parms.K2Node_CustomEvent_reply_time = K2Node_CustomEvent_reply_time;
	Parms.K2Node_CustomEvent_reply_sound = K2Node_CustomEvent_reply_sound;
	Parms.K2Node_CustomEvent_dlg_actor = K2Node_CustomEvent_dlg_actor;
	Parms.K2Node_CustomEvent_dlg_event = K2Node_CustomEvent_dlg_event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_event__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Dlg_event                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Ed_dlg_event__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Dlg_event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_event__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_event__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_event = Dlg_event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_anim_sound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reply_started                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Reply_line                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Reply_time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  Reply_sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Ed_dlg_anim_sound__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, bool Reply_started, class FName Reply_line, float Reply_time, class USoundWave* Reply_sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_anim_sound__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_anim_sound__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Reply_started = Reply_started;
	Parms.Reply_line = Reply_line;
	Parms.Reply_time = Reply_time;
	Parms.Reply_sound = Reply_sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_distance__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_distance_far                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Ed_dlg_distance__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, bool Is_distance_far)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_distance__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_distance__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Is_distance_far = Is_distance_far;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_lookat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_anim_lookat          Lookat_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Ed_dlg_lookat__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_anim_lookat& Lookat_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_lookat__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_lookat__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Lookat_data = Lookat_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_init__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubp_dlg_component_C::Ed_dlg_init__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_init__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_interact__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Instigator_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator_actor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_interact__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_interact__DelegateSignature_Params Parms{};

	Parms.Instigator_id = Instigator_id;
	Parms.Instigator_actor = Instigator_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_choice__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_data   Choice_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Ubp_dlg_component_C::Ed_dlg_choice__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_branch_choice_data& Choice_data, const struct FS_dlg_branch_choice_info& Choice_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_choice__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_choice__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Choice_data = Choice_data;
	Parms.Choice_info = Choice_info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_reply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reply_started                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_reply_data           Reply_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_reply_info           Reply_info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Ubp_dlg_component_C::Ed_dlg_reply__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, bool Reply_started, const struct FS_dlg_reply_data& Reply_data, const struct FS_dlg_reply_info& Reply_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_reply__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_reply__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Reply_started = Reply_started;
	Parms.Reply_data = Reply_data;
	Parms.Reply_info = Reply_info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_started__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          Dlg_status                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Ed_dlg_started__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, enum class Enum_dlg_start Dlg_status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_started__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_started__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_status = Dlg_status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_anim_cinematic__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Cinematic_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Use_cinematic_anim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Ed_dlg_anim_cinematic__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, class FName Cinematic_id, bool Use_cinematic_anim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_anim_cinematic__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_anim_cinematic__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Cinematic_id = Cinematic_id;
	Parms.Use_cinematic_anim = Use_cinematic_anim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_anim_info__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_anim_info            Anim_data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Ubp_dlg_component_C::Ed_dlg_anim_info__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_anim_info& Anim_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_anim_info__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_anim_info__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Anim_data = Anim_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_activated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_active                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Ed_dlg_activated__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_activated__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_activated__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_added__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_removed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_destroyed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_dlg_component_C::Ed_dlg_added__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, bool Is_removed, bool Is_destroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_added__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_added__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Is_removed = Is_removed;
	Parms.Is_destroyed = Is_destroyed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_notify__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_notify_info          Notify_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Ed_dlg_notify__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_notify_info& Notify_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_notify__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_notify__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Notify_data = Notify_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_component.bp_dlg_component_C.ed_dlg_branch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Dlg_old_branch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Dlg_new_branch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_dlg_component_C::Ed_dlg_branch__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, class FName Dlg_old_branch, class FName Dlg_new_branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_component_C", "ed_dlg_branch__DelegateSignature");

	Params::Ubp_dlg_component_C_Ed_dlg_branch__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_old_branch = Dlg_old_branch;
	Parms.Dlg_new_branch = Dlg_new_branch;

	UObject::ProcessEvent(Func, &Parms);

}

}


