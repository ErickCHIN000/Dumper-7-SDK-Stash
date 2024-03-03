#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_msl_settings_actor.bp_msl_settings_actor_C
// (Actor)

class UClass* Abp_msl_settings_actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_msl_settings_actor_C");

	return Clss;
}


// bp_msl_settings_actor_C bp_msl_settings_actor.Default__bp_msl_settings_actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_msl_settings_actor_C* Abp_msl_settings_actor_C::GetDefaultObj()
{
	static class Abp_msl_settings_actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_msl_settings_actor_C*>(Abp_msl_settings_actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.get_inputs_by_category
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Input_category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               All_categories                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                Input_list                                                       (Parm, OutParm)
// class FName                        Local_name                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Local_array                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_data               CallFunc_get_input_data_input_data                               (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_get_input_data_positive_chord                           (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_get_input_data_negative_chord                           (HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_positive_name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_negative_name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_input_category                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_input_data_is_axis                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_input_data_is_trigger                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_settings_actor_C::Get_inputs_by_category(class FName Input_category, bool All_categories, TArray<class FName>* Input_list, class FName Local_name, class FName Local_category, const TArray<class FName>& Local_array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_input_data& CallFunc_get_input_data_input_data, const struct FInputChord& CallFunc_get_input_data_positive_chord, const struct FInputChord& CallFunc_get_input_data_negative_chord, class FName CallFunc_get_input_data_positive_name, class FName CallFunc_get_input_data_negative_name, class FName CallFunc_get_input_data_input_category, bool CallFunc_get_input_data_is_axis, bool CallFunc_get_input_data_is_trigger, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "get_inputs_by_category");

	Params::Abp_msl_settings_actor_C_Get_inputs_by_category_Params Parms{};

	Parms.Input_category = Input_category;
	Parms.All_categories = All_categories;
	Parms.Local_name = Local_name;
	Parms.Local_category = Local_category;
	Parms.Local_array = Local_array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_get_input_data_input_data = CallFunc_get_input_data_input_data;
	Parms.CallFunc_get_input_data_positive_chord = CallFunc_get_input_data_positive_chord;
	Parms.CallFunc_get_input_data_negative_chord = CallFunc_get_input_data_negative_chord;
	Parms.CallFunc_get_input_data_positive_name = CallFunc_get_input_data_positive_name;
	Parms.CallFunc_get_input_data_negative_name = CallFunc_get_input_data_negative_name;
	Parms.CallFunc_get_input_data_input_category = CallFunc_get_input_data_input_category;
	Parms.CallFunc_get_input_data_is_axis = CallFunc_get_input_data_is_axis;
	Parms.CallFunc_get_input_data_is_trigger = CallFunc_get_input_data_is_trigger;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Input_list != nullptr)
		*Input_list = std::move(Parms.Input_list);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.apply_input
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Input_name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Input_category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               All_categories                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Reset_defaults                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Save_inputs                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FS_input_data>       Local_default_data                                               (Edit, BlueprintVisible)
// TArray<class FName>                Local_input_list                                                 (Edit, BlueprintVisible)
// TArray<struct FKey>                Local_invalid_keys                                               (Edit, BlueprintVisible)
// TArray<struct FInputChord>         Local_action_keys                                                (Edit, BlueprintVisible)
// TArray<struct FInputChord>         Local_negative_keys                                              (Edit, BlueprintVisible)
// TArray<struct FInputChord>         Local_positive_keys                                              (Edit, BlueprintVisible)
// int32                              Local_input_index                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_input_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_get_inputs_by_category_input_list                       (ReferenceParm)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_load_input_input_list                                   (ReferenceParm)
// TArray<struct FS_input_data>       CallFunc_load_input_input_data                                   (ReferenceParm)
// bool                               CallFunc_load_input_loaded_defaults                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_data               CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 CallFunc_Array_Get_Item_3                                        (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_Array_Get_Item_4                                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FKey>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_1                          (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_5                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item_6                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)

void Abp_msl_settings_actor_C::Apply_input(class FName Input_name, class FName Input_category, bool All_categories, bool Reset_defaults, bool Save_inputs, const TArray<struct FS_input_data>& Local_default_data, const TArray<class FName>& Local_input_list, const TArray<struct FKey>& Local_invalid_keys, const TArray<struct FInputChord>& Local_action_keys, const TArray<struct FInputChord>& Local_negative_keys, const TArray<struct FInputChord>& Local_positive_keys, int32 Local_input_index, class FName Local_input_id, int32 Temp_int_Array_Index_Variable, TArray<class FName>& CallFunc_get_inputs_by_category_input_list, bool CallFunc_NotEqual_NameName_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class FName>& CallFunc_load_input_input_list, TArray<struct FS_input_data>& CallFunc_load_input_input_data, bool CallFunc_load_input_loaded_defaults, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FS_input_data& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class FName CallFunc_Array_Get_Item_1, const struct FInputChord& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_4, const struct FInputChord& CallFunc_Array_Get_Item_3, const struct FInputChord& CallFunc_Array_Get_Item_4, const struct FInputChord& K2Node_MakeStruct_InputChord, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_1, TArray<struct FKey>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, bool CallFunc_Not_PreBool_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_4, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_5, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_6, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_7, int32 CallFunc_Max_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_8, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "apply_input");

	Params::Abp_msl_settings_actor_C_Apply_input_Params Parms{};

	Parms.Input_name = Input_name;
	Parms.Input_category = Input_category;
	Parms.All_categories = All_categories;
	Parms.Reset_defaults = Reset_defaults;
	Parms.Save_inputs = Save_inputs;
	Parms.Local_default_data = Local_default_data;
	Parms.Local_input_list = Local_input_list;
	Parms.Local_invalid_keys = Local_invalid_keys;
	Parms.Local_action_keys = Local_action_keys;
	Parms.Local_negative_keys = Local_negative_keys;
	Parms.Local_positive_keys = Local_positive_keys;
	Parms.Local_input_index = Local_input_index;
	Parms.Local_input_id = Local_input_id;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_get_inputs_by_category_input_list = CallFunc_get_inputs_by_category_input_list;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_load_input_input_list = CallFunc_load_input_input_list;
	Parms.CallFunc_load_input_input_data = CallFunc_load_input_input_data;
	Parms.CallFunc_load_input_loaded_defaults = CallFunc_load_input_loaded_defaults;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_2 = CallFunc_GetInputSettings_ReturnValue_2;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_1 = K2Node_MakeStruct_InputAxisKeyMapping_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_3 = CallFunc_GetInputSettings_ReturnValue_3;
	Parms.CallFunc_GetInputSettings_ReturnValue_4 = CallFunc_GetInputSettings_ReturnValue_4;
	Parms.CallFunc_GetInputSettings_ReturnValue_5 = CallFunc_GetInputSettings_ReturnValue_5;
	Parms.CallFunc_GetInputSettings_ReturnValue_6 = CallFunc_GetInputSettings_ReturnValue_6;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetInputSettings_ReturnValue_7 = CallFunc_GetInputSettings_ReturnValue_7;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_8 = CallFunc_GetInputSettings_ReturnValue_8;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.rebind_input
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               both_axis                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Positive_axis                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Key_index                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Input_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 Input_chord                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        Local_category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_axis                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 Local_input_chord                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FName                        Local_input_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_key_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_positive                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_both_axis                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsAxis1D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_get_key_binds_found_inputs                              (ReferenceParm)
// TArray<bool>                       CallFunc_get_key_binds_found_positive                            (ReferenceParm)
// TArray<int32>                      CallFunc_get_key_binds_found_keys                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_data               CallFunc_get_input_data_input_data                               (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_get_input_data_positive_chord                           (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_get_input_data_negative_chord                           (HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_positive_name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_negative_name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_input_category                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_input_data_is_axis                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_input_data_is_trigger                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_settings_actor_C::Rebind_input(bool both_axis, bool Positive_axis, int32 Key_index, class FName Input_id, const struct FInputChord& Input_chord, class FName Local_category, bool Local_axis, const struct FInputChord& Local_input_chord, class FName Local_input_id, int32 Local_key_index, bool Local_positive, bool Local_both_axis, bool CallFunc_Key_IsAxis1D_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class FName>& CallFunc_get_key_binds_found_inputs, TArray<bool>& CallFunc_get_key_binds_found_positive, TArray<int32>& CallFunc_get_key_binds_found_keys, int32 CallFunc_Array_Length_ReturnValue, const struct FS_input_data& CallFunc_get_input_data_input_data, const struct FInputChord& CallFunc_get_input_data_positive_chord, const struct FInputChord& CallFunc_get_input_data_negative_chord, class FName CallFunc_get_input_data_positive_name, class FName CallFunc_get_input_data_negative_name, class FName CallFunc_get_input_data_input_category, bool CallFunc_get_input_data_is_axis, bool CallFunc_get_input_data_is_trigger, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Get_Item_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "rebind_input");

	Params::Abp_msl_settings_actor_C_Rebind_input_Params Parms{};

	Parms.both_axis = both_axis;
	Parms.Positive_axis = Positive_axis;
	Parms.Key_index = Key_index;
	Parms.Input_id = Input_id;
	Parms.Input_chord = Input_chord;
	Parms.Local_category = Local_category;
	Parms.Local_axis = Local_axis;
	Parms.Local_input_chord = Local_input_chord;
	Parms.Local_input_id = Local_input_id;
	Parms.Local_key_index = Local_key_index;
	Parms.Local_positive = Local_positive;
	Parms.Local_both_axis = Local_both_axis;
	Parms.CallFunc_Key_IsAxis1D_ReturnValue = CallFunc_Key_IsAxis1D_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_get_key_binds_found_inputs = CallFunc_get_key_binds_found_inputs;
	Parms.CallFunc_get_key_binds_found_positive = CallFunc_get_key_binds_found_positive;
	Parms.CallFunc_get_key_binds_found_keys = CallFunc_get_key_binds_found_keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_get_input_data_input_data = CallFunc_get_input_data_input_data;
	Parms.CallFunc_get_input_data_positive_chord = CallFunc_get_input_data_positive_chord;
	Parms.CallFunc_get_input_data_negative_chord = CallFunc_get_input_data_negative_chord;
	Parms.CallFunc_get_input_data_positive_name = CallFunc_get_input_data_positive_name;
	Parms.CallFunc_get_input_data_negative_name = CallFunc_get_input_data_negative_name;
	Parms.CallFunc_get_input_data_input_category = CallFunc_get_input_data_input_category;
	Parms.CallFunc_get_input_data_is_axis = CallFunc_get_input_data_is_axis;
	Parms.CallFunc_get_input_data_is_trigger = CallFunc_get_input_data_is_trigger;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.set_bind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Input_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Positive_axis                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Key_index                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 Input_chord                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FInputChord>         Local_action                                                     (Edit, BlueprintVisible)
// TArray<struct FInputChord>         Local_negative                                                   (Edit, BlueprintVisible)
// TArray<struct FInputChord>         Local_positive                                                   (Edit, BlueprintVisible)
// bool                               Local_axis                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 Local_input_chord                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Local_key_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_input_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_positive_axis                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_settings_actor_C::Set_bind(class FName Input_id, bool Positive_axis, int32 Key_index, const struct FInputChord& Input_chord, const TArray<struct FInputChord>& Local_action, const TArray<struct FInputChord>& Local_negative, const TArray<struct FInputChord>& Local_positive, bool Local_axis, const struct FInputChord& Local_input_chord, int32 Local_key_index, class FName Local_input_id, bool Local_positive_axis, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "set_bind");

	Params::Abp_msl_settings_actor_C_Set_bind_Params Parms{};

	Parms.Input_id = Input_id;
	Parms.Positive_axis = Positive_axis;
	Parms.Key_index = Key_index;
	Parms.Input_chord = Input_chord;
	Parms.Local_action = Local_action;
	Parms.Local_negative = Local_negative;
	Parms.Local_positive = Local_positive;
	Parms.Local_axis = Local_axis;
	Parms.Local_input_chord = Local_input_chord;
	Parms.Local_key_index = Local_key_index;
	Parms.Local_input_id = Local_input_id;
	Parms.Local_positive_axis = Local_positive_axis;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.get_key_binds
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                 Input_chord                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        Input_category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Found_inputs                                                     (Parm, OutParm)
// TArray<bool>                       Found_positive                                                   (Parm, OutParm)
// TArray<int32>                      Found_keys                                                       (Parm, OutParm)
// int32                              Local_key_index                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputChord>         Local_action                                                     (Edit, BlueprintVisible)
// TArray<struct FInputChord>         Local_negative                                                   (Edit, BlueprintVisible)
// TArray<struct FInputChord>         Local_positive                                                   (Edit, BlueprintVisible)
// TArray<int32>                      Local_found_index                                                (Edit, BlueprintVisible)
// TArray<bool>                       Local_found_positive                                             (Edit, BlueprintVisible)
// TArray<class FName>                Local_found_id                                                   (Edit, BlueprintVisible)
// class FName                        Local_input_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_input_category                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 Local_input_chord                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_InputChordInputChord_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_InputChordInputChord_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_InputChordInputChord_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_input_data               CallFunc_get_input_data_input_data                               (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_get_input_data_positive_chord                           (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_get_input_data_negative_chord                           (HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_positive_name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_negative_name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_input_category                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_input_data_is_axis                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_input_data_is_trigger                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_data               CallFunc_Array_Get_Item_4                                        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_settings_actor_C::Get_key_binds(const struct FInputChord& Input_chord, class FName Input_category, TArray<class FName>* Found_inputs, TArray<bool>* Found_positive, TArray<int32>* Found_keys, int32 Local_key_index, const TArray<struct FInputChord>& Local_action, const TArray<struct FInputChord>& Local_negative, const TArray<struct FInputChord>& Local_positive, const TArray<int32>& Local_found_index, const TArray<bool>& Local_found_positive, const TArray<class FName>& Local_found_id, class FName Local_input_id, class FName Local_input_category, const struct FInputChord& Local_input_chord, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FInputChord& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_InputChordInputChord_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, const struct FInputChord& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_InputChordInputChord_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, const struct FInputChord& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_InputChordInputChord_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool Temp_bool_Variable_1, const struct FS_input_data& CallFunc_get_input_data_input_data, const struct FInputChord& CallFunc_get_input_data_positive_chord, const struct FInputChord& CallFunc_get_input_data_negative_chord, class FName CallFunc_get_input_data_positive_name, class FName CallFunc_get_input_data_negative_name, class FName CallFunc_get_input_data_input_category, bool CallFunc_get_input_data_is_axis, bool CallFunc_get_input_data_is_trigger, int32 CallFunc_Array_Add_ReturnValue_7, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_Array_Get_Item_3, bool Temp_bool_Variable_2, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_3, const struct FS_input_data& CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "get_key_binds");

	Params::Abp_msl_settings_actor_C_Get_key_binds_Params Parms{};

	Parms.Input_chord = Input_chord;
	Parms.Input_category = Input_category;
	Parms.Local_key_index = Local_key_index;
	Parms.Local_action = Local_action;
	Parms.Local_negative = Local_negative;
	Parms.Local_positive = Local_positive;
	Parms.Local_found_index = Local_found_index;
	Parms.Local_found_positive = Local_found_positive;
	Parms.Local_found_id = Local_found_id;
	Parms.Local_input_id = Local_input_id;
	Parms.Local_input_category = Local_input_category;
	Parms.Local_input_chord = Local_input_chord;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_InputChordInputChord_ReturnValue = CallFunc_EqualEqual_InputChordInputChord_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_InputChordInputChord_ReturnValue_1 = CallFunc_EqualEqual_InputChordInputChord_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_EqualEqual_InputChordInputChord_ReturnValue_2 = CallFunc_EqualEqual_InputChordInputChord_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_get_input_data_input_data = CallFunc_get_input_data_input_data;
	Parms.CallFunc_get_input_data_positive_chord = CallFunc_get_input_data_positive_chord;
	Parms.CallFunc_get_input_data_negative_chord = CallFunc_get_input_data_negative_chord;
	Parms.CallFunc_get_input_data_positive_name = CallFunc_get_input_data_positive_name;
	Parms.CallFunc_get_input_data_negative_name = CallFunc_get_input_data_negative_name;
	Parms.CallFunc_get_input_data_input_category = CallFunc_get_input_data_input_category;
	Parms.CallFunc_get_input_data_is_axis = CallFunc_get_input_data_is_axis;
	Parms.CallFunc_get_input_data_is_trigger = CallFunc_get_input_data_is_trigger;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Array_Add_ReturnValue_8 = CallFunc_Array_Add_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_inputs != nullptr)
		*Found_inputs = std::move(Parms.Found_inputs);

	if (Found_positive != nullptr)
		*Found_positive = std::move(Parms.Found_positive);

	if (Found_keys != nullptr)
		*Found_keys = std::move(Parms.Found_keys);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.get_input_data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Input_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Key_index                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_data               Input_data                                                       (Parm, OutParm, HasGetValueTypeHash)
// struct FInputChord                 Positive_chord                                                   (Parm, OutParm, HasGetValueTypeHash)
// struct FInputChord                 Negative_chord                                                   (Parm, OutParm, HasGetValueTypeHash)
// class FName                        Positive_name                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Negative_name                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Input_category                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_axis                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_trigger                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_trigger                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_axis                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_neg_name                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_pos_name                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_input_index                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_data               Local_input                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FName                        Local_input_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_action             CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_input_axis               CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)

void Abp_msl_settings_actor_C::Get_input_data(class FName Input_id, int32 Key_index, struct FS_input_data* Input_data, struct FInputChord* Positive_chord, struct FInputChord* Negative_chord, class FName* Positive_name, class FName* Negative_name, class FName* Input_category, bool* Is_axis, bool* Is_trigger, bool Local_trigger, bool Local_axis, class FName Local_category, class FName Local_neg_name, class FName Local_pos_name, int32 Local_input_index, const struct FS_input_data& Local_input, class FName Local_input_id, const struct FS_input_action& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_input_axis& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FInputChord& CallFunc_Array_Get_Item, const struct FInputChord& CallFunc_Array_Get_Item_1, const struct FInputChord& CallFunc_Array_Get_Item_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "get_input_data");

	Params::Abp_msl_settings_actor_C_Get_input_data_Params Parms{};

	Parms.Input_id = Input_id;
	Parms.Key_index = Key_index;
	Parms.Local_trigger = Local_trigger;
	Parms.Local_axis = Local_axis;
	Parms.Local_category = Local_category;
	Parms.Local_neg_name = Local_neg_name;
	Parms.Local_pos_name = Local_pos_name;
	Parms.Local_input_index = Local_input_index;
	Parms.Local_input = Local_input;
	Parms.Local_input_id = Local_input_id;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Input_data != nullptr)
		*Input_data = std::move(Parms.Input_data);

	if (Positive_chord != nullptr)
		*Positive_chord = std::move(Parms.Positive_chord);

	if (Negative_chord != nullptr)
		*Negative_chord = std::move(Parms.Negative_chord);

	if (Positive_name != nullptr)
		*Positive_name = Parms.Positive_name;

	if (Negative_name != nullptr)
		*Negative_name = Parms.Negative_name;

	if (Input_category != nullptr)
		*Input_category = Parms.Input_category;

	if (Is_axis != nullptr)
		*Is_axis = Parms.Is_axis;

	if (Is_trigger != nullptr)
		*Is_trigger = Parms.Is_trigger;

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.save_input
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject_input_save_C*        CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject_input_save_C*        K2Node_DynamicCast_AsObject_Input_Save                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToSlot_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_settings_actor_C::Save_input(class UObject_input_save_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UObject_input_save_C* K2Node_DynamicCast_AsObject_Input_Save, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "save_input");

	Params::Abp_msl_settings_actor_C_Save_input_Params Parms{};

	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsObject_Input_Save = K2Node_DynamicCast_AsObject_Input_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue_1 = CallFunc_SaveGameToSlot_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.load_input
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Load_defaults                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                Input_list                                                       (Parm, OutParm)
// TArray<struct FS_input_data>       Input_data                                                       (Parm, OutParm)
// bool                               Loaded_defaults                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FS_input_data>       Local_saved_input                                                (Edit, BlueprintVisible)
// bool                               Local_savefile                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                Local_action_list                                                (Edit, BlueprintVisible)
// TArray<class FName>                Local_axis_list                                                  (Edit, BlueprintVisible)
// TArray<class FName>                Local_input_list                                                 (Edit, BlueprintVisible)
// TArray<struct FS_input_data>       Local_default_input                                              (Edit, BlueprintVisible)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject_input_save_C*        K2Node_DynamicCast_AsObject_Input_Save                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_action             CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_input_axis               CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_1                                   (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_convert_axis_keys_positive_chord                        (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_convert_axis_keys_negative_chord                        (HasGetValueTypeHash)
// TArray<struct FInputChord>         K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FInputChord                 CallFunc_convert_axis_keys_positive_chord_1                      (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_convert_axis_keys_negative_chord_1                      (HasGetValueTypeHash)
// struct FS_input_data               K2Node_MakeStruct_s_input_data                                   (HasGetValueTypeHash)
// TArray<struct FInputChord>         K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputChord>         K2Node_MakeArray_Array_2                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_data               K2Node_MakeStruct_s_input_data_1                                 (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_settings_actor_C::Load_input(bool Load_defaults, TArray<class FName>* Input_list, TArray<struct FS_input_data>* Input_data, bool* Loaded_defaults, const TArray<struct FS_input_data>& Local_saved_input, bool Local_savefile, const TArray<class FName>& Local_action_list, const TArray<class FName>& Local_axis_list, const TArray<class FName>& Local_input_list, const TArray<struct FS_input_data>& Local_default_input, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_DeleteGameInSlot_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UObject_input_save_C* K2Node_DynamicCast_AsObject_Input_Save, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, const struct FS_input_action& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_input_axis& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FInputChord& K2Node_MakeStruct_InputChord, const struct FInputChord& K2Node_MakeStruct_InputChord_1, const struct FInputChord& CallFunc_convert_axis_keys_positive_chord, const struct FInputChord& CallFunc_convert_axis_keys_negative_chord, TArray<struct FInputChord>& K2Node_MakeArray_Array, const struct FInputChord& CallFunc_convert_axis_keys_positive_chord_1, const struct FInputChord& CallFunc_convert_axis_keys_negative_chord_1, const struct FS_input_data& K2Node_MakeStruct_s_input_data, TArray<struct FInputChord>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FInputChord>& K2Node_MakeArray_Array_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FS_input_data& K2Node_MakeStruct_s_input_data_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "load_input");

	Params::Abp_msl_settings_actor_C_Load_input_Params Parms{};

	Parms.Load_defaults = Load_defaults;
	Parms.Local_saved_input = Local_saved_input;
	Parms.Local_savefile = Local_savefile;
	Parms.Local_action_list = Local_action_list;
	Parms.Local_axis_list = Local_axis_list;
	Parms.Local_input_list = Local_input_list;
	Parms.Local_default_input = Local_default_input;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue = CallFunc_DeleteGameInSlot_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsObject_Input_Save = K2Node_DynamicCast_AsObject_Input_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.K2Node_MakeStruct_InputChord_1 = K2Node_MakeStruct_InputChord_1;
	Parms.CallFunc_convert_axis_keys_positive_chord = CallFunc_convert_axis_keys_positive_chord;
	Parms.CallFunc_convert_axis_keys_negative_chord = CallFunc_convert_axis_keys_negative_chord;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_convert_axis_keys_positive_chord_1 = CallFunc_convert_axis_keys_positive_chord_1;
	Parms.CallFunc_convert_axis_keys_negative_chord_1 = CallFunc_convert_axis_keys_negative_chord_1;
	Parms.K2Node_MakeStruct_s_input_data = K2Node_MakeStruct_s_input_data;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_MakeStruct_s_input_data_1 = K2Node_MakeStruct_s_input_data_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Input_list != nullptr)
		*Input_list = std::move(Parms.Input_list);

	if (Input_data != nullptr)
		*Input_data = std::move(Parms.Input_data);

	if (Loaded_defaults != nullptr)
		*Loaded_defaults = Parms.Loaded_defaults;

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.convert_axis_keys
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FKey>                Data_axis                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInputChord                 Positive_chord                                                   (Parm, OutParm, HasGetValueTypeHash)
// struct FInputChord                 Negative_chord                                                   (Parm, OutParm, HasGetValueTypeHash)
// struct FInputChord                 Local_negative                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FInputChord                 Local_positive                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FKey>                Local_keys                                                       (Edit, BlueprintVisible)
// struct FKey                        CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_1                                   (HasGetValueTypeHash)

void Abp_msl_settings_actor_C::Convert_axis_keys(TArray<struct FKey>& Data_axis, struct FInputChord* Positive_chord, struct FInputChord* Negative_chord, const struct FInputChord& Local_negative, const struct FInputChord& Local_positive, const TArray<struct FKey>& Local_keys, const struct FKey& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FKey& CallFunc_Array_Get_Item_1, const struct FInputChord& K2Node_MakeStruct_InputChord_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "convert_axis_keys");

	Params::Abp_msl_settings_actor_C_Convert_axis_keys_Params Parms{};

	Parms.Data_axis = Data_axis;
	Parms.Local_negative = Local_negative;
	Parms.Local_positive = Local_positive;
	Parms.Local_keys = Local_keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_InputChord_1 = K2Node_MakeStruct_InputChord_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Positive_chord != nullptr)
		*Positive_chord = std::move(Parms.Positive_chord);

	if (Negative_chord != nullptr)
		*Negative_chord = std::move(Parms.Negative_chord);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.convert_action_keys
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Action_key                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Action_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInputChord                 Input_chord                                                      (Parm, OutParm, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_get_key_by_id_found_key                                 (HasGetValueTypeHash)
// class FName                        CallFunc_get_key_by_id_found_id                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)

void Abp_msl_settings_actor_C::Convert_action_keys(class FName Action_key, TArray<class FName>& Action_data, struct FInputChord* Input_chord, class FName Temp_name_Variable, const struct FKey& CallFunc_get_key_by_id_found_key, class FName CallFunc_get_key_by_id_found_id, class FName Temp_name_Variable_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, class FName Temp_name_Variable_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class FName Temp_name_Variable_3, int32 CallFunc_Array_Find_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, const struct FInputChord& K2Node_MakeStruct_InputChord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "convert_action_keys");

	Params::Abp_msl_settings_actor_C_Convert_action_keys_Params Parms{};

	Parms.Action_key = Action_key;
	Parms.Action_data = Action_data;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_get_key_by_id_found_key = CallFunc_get_key_by_id_found_key;
	Parms.CallFunc_get_key_by_id_found_id = CallFunc_get_key_by_id_found_id;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_Array_Find_ReturnValue_2 = CallFunc_Array_Find_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Find_ReturnValue_3 = CallFunc_Array_Find_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3 = CallFunc_GreaterEqual_IntInt_ReturnValue_3;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;

	UObject::ProcessEvent(Func, &Parms);

	if (Input_chord != nullptr)
		*Input_chord = std::move(Parms.Input_chord);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.get_key_visual_data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        Localized_name                                                   (Parm, OutParm)
// class UTexture2D*                  Platform_icon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Local_icon                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_name                                                       (Edit, BlueprintVisible)
// class FName                        Local_key_id                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_get_key_by_id_found_key                                 (HasGetValueTypeHash)
// class FName                        CallFunc_get_key_by_id_found_id                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_key                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// class Abp_msl_localization_actor_C*CallFunc_msl_get_localization_reference_localization_actor       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_text_localization_is_valid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_text_localization_from_data                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_get_text_localization_line_text                         (None)
// int32                              CallFunc_get_text_localization_line_scale                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_settings_actor_C::Get_key_visual_data(const struct FKey& Key, class FText* Localized_name, class UTexture2D** Platform_icon, class FName Local_id, class UTexture2D* Local_icon, class FText Local_name, class FName Local_key_id, const struct FKey& CallFunc_get_key_by_id_found_key, class FName CallFunc_get_key_by_id_found_id, const struct FS_input_key& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, bool CallFunc_get_text_localization_is_valid, bool CallFunc_get_text_localization_from_data, class FText CallFunc_get_text_localization_line_text, int32 CallFunc_get_text_localization_line_scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "get_key_visual_data");

	Params::Abp_msl_settings_actor_C_Get_key_visual_data_Params Parms{};

	Parms.Key = Key;
	Parms.Local_id = Local_id;
	Parms.Local_icon = Local_icon;
	Parms.Local_name = Local_name;
	Parms.Local_key_id = Local_key_id;
	Parms.CallFunc_get_key_by_id_found_key = CallFunc_get_key_by_id_found_key;
	Parms.CallFunc_get_key_by_id_found_id = CallFunc_get_key_by_id_found_id;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_msl_get_localization_reference_localization_actor = CallFunc_msl_get_localization_reference_localization_actor;
	Parms.CallFunc_get_text_localization_is_valid = CallFunc_get_text_localization_is_valid;
	Parms.CallFunc_get_text_localization_from_data = CallFunc_get_text_localization_from_data;
	Parms.CallFunc_get_text_localization_line_text = CallFunc_get_text_localization_line_text;
	Parms.CallFunc_get_text_localization_line_scale = CallFunc_get_text_localization_line_scale;

	UObject::ProcessEvent(Func, &Parms);

	if (Localized_name != nullptr)
		*Localized_name = Parms.Localized_name;

	if (Platform_icon != nullptr)
		*Platform_icon = Parms.Platform_icon;

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.create_keys_data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_input_key                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_msl_settings_actor_C::Create_keys_data(int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, const struct FS_input_key& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "create_keys_data");

	Params::Abp_msl_settings_actor_C_Create_keys_data_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.get_key_by_id
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Id_to_key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Key_to_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FKey                        Found_key                                                        (Parm, OutParm, HasGetValueTypeHash)
// class FName                        Found_id                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Local_empty                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_settings_actor_C::Get_key_by_id(class FName Id_to_key, const struct FKey& Key_to_id, struct FKey* Found_key, class FName* Found_id, const struct FKey& Local_empty, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "get_key_by_id");

	Params::Abp_msl_settings_actor_C_Get_key_by_id_Params Parms{};

	Parms.Id_to_key = Id_to_key;
	Parms.Key_to_id = Key_to_id;
	Parms.Local_empty = Local_empty;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_key != nullptr)
		*Found_key = std::move(Parms.Found_key);

	if (Found_id != nullptr)
		*Found_id = Parms.Found_id;

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.init_settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_msl_settings_actor_C::Init_settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "init_settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Abp_msl_settings_actor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.ExecuteUbergraph_bp_msl_settings_actor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_load_input_input_list                                   (ReferenceParm)
// TArray<struct FS_input_data>       CallFunc_load_input_input_data                                   (ReferenceParm)
// bool                               CallFunc_load_input_loaded_defaults                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_load_input_input_list_1                                 (ReferenceParm)
// TArray<struct FS_input_data>       CallFunc_load_input_input_data_1                                 (ReferenceParm)
// bool                               CallFunc_load_input_loaded_defaults_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_settings_actor_C::ExecuteUbergraph_bp_msl_settings_actor(int32 EntryPoint, TArray<class FName>& CallFunc_load_input_input_list, TArray<struct FS_input_data>& CallFunc_load_input_input_data, bool CallFunc_load_input_loaded_defaults, TArray<class FName>& CallFunc_load_input_input_list_1, TArray<struct FS_input_data>& CallFunc_load_input_input_data_1, bool CallFunc_load_input_loaded_defaults_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "ExecuteUbergraph_bp_msl_settings_actor");

	Params::Abp_msl_settings_actor_C_ExecuteUbergraph_bp_msl_settings_actor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_load_input_input_list = CallFunc_load_input_input_list;
	Parms.CallFunc_load_input_input_data = CallFunc_load_input_input_data;
	Parms.CallFunc_load_input_loaded_defaults = CallFunc_load_input_loaded_defaults;
	Parms.CallFunc_load_input_input_list_1 = CallFunc_load_input_input_list_1;
	Parms.CallFunc_load_input_input_data_1 = CallFunc_load_input_input_data_1;
	Parms.CallFunc_load_input_loaded_defaults_1 = CallFunc_load_input_loaded_defaults_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_settings_actor.bp_msl_settings_actor_C.settings_updated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Settings_name                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Settings_value                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Slider_value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_slider                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_apply                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_msl_settings_actor_C::Settings_updated__DelegateSignature(class FName Settings_name, int32 Settings_value, float Slider_value, bool Is_slider, bool Is_apply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_settings_actor_C", "settings_updated__DelegateSignature");

	Params::Abp_msl_settings_actor_C_Settings_updated__DelegateSignature_Params Parms{};

	Parms.Settings_name = Settings_name;
	Parms.Settings_value = Settings_value;
	Parms.Slider_value = Slider_value;
	Parms.Is_slider = Is_slider;
	Parms.Is_apply = Is_apply;

	UObject::ProcessEvent(Func, &Parms);

}

}


