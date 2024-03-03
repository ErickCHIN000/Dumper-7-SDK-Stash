#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TemplateInputAction.W_TemplateInputAction_C
// (None)

class UClass* UW_TemplateInputAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TemplateInputAction_C");

	return Clss;
}


// W_TemplateInputAction_C W_TemplateInputAction.Default__W_TemplateInputAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TemplateInputAction_C* UW_TemplateInputAction_C::GetDefaultObj()
{
	static class UW_TemplateInputAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TemplateInputAction_C*>(UW_TemplateInputAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_TemplateInputAction.W_TemplateInputAction_C.MSG_RequestKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Action_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_TemplateControlAction ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_TemplateControlAxis   AxisName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 MyKey                                                            (Parm, OutParm, HasGetValueTypeHash)

void UW_TemplateInputAction_C::MSG_RequestKey(bool Action_, enum class E_TemplateControlAction ActionName, enum class E_TemplateControlAxis AxisName, struct FInputChord* MyKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "MSG_RequestKey");

	Params::UW_TemplateInputAction_C_MSG_RequestKey_Params Parms{};

	Parms.Action_ = Action_;
	Parms.ActionName = ActionName;
	Parms.AxisName = AxisName;

	UObject::ProcessEvent(Func, &Parms);

	if (MyKey != nullptr)
		*MyKey = std::move(Parms.MyKey);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.MSG_IsKeyEditing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Editing_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TemplateInputAction_C::MSG_IsKeyEditing(bool* Editing_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "MSG_IsKeyEditing");

	Params::UW_TemplateInputAction_C_MSG_IsKeyEditing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Editing_ != nullptr)
		*Editing_ = Parms.Editing_;

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.CustomNavigation_Down
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_TemplateInputAction_C::CustomNavigation_Down(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "CustomNavigation_Down");

	Params::UW_TemplateInputAction_C_CustomNavigation_Down_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.CustomNavigation_Up
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_TemplateInputAction_C::CustomNavigation_Up(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "CustomNavigation_Up");

	Params::UW_TemplateInputAction_C_CustomNavigation_Up_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.CustomNavigation_Right
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UW_TemplateInputAction_C::CustomNavigation_Right(enum class EUINavigation Navigation, bool CallFunc_HasUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "CustomNavigation_Right");

	Params::UW_TemplateInputAction_C_CustomNavigation_Right_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.CustomNavigation_Left
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UW_TemplateInputAction_C::CustomNavigation_Left(enum class EUINavigation Navigation, bool CallFunc_HasUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "CustomNavigation_Left");

	Params::UW_TemplateInputAction_C_CustomNavigation_Left_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.ChangeTitleColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 TitleColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_TemplateInputAction_C::ChangeTitleColor(const struct FSlateColor& TitleColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "ChangeTitleColor");

	Params::UW_TemplateInputAction_C_ChangeTitleColor_Params Parms{};

	Parms.TitleColor = TitleColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.CheckSizeArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        K2Node_MakeStruct_Key                                            (HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TemplateInputAction_C::CheckSizeArray(const struct FKey& K2Node_MakeStruct_Key, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "CheckSizeArray");

	Params::UW_TemplateInputAction_C_CheckSizeArray_Params Parms{};

	Parms.K2Node_MakeStruct_Key = K2Node_MakeStruct_Key;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.LoadDataAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping_1                        (None)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TemplateInputAction_C::LoadDataAction(const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "LoadDataAction");

	Params::UW_TemplateInputAction_C_LoadDataAction_Params Parms{};

	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.K2Node_MakeStruct_InputActionKeyMapping_1 = K2Node_MakeStruct_InputActionKeyMapping_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.CheckActionIsDefault
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDefault_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_MakeStruct_Key                                            (UObjectWrapper, HasGetValueTypeHash)
// struct FKey                        K2Node_MakeStruct_Key_1                                          (UObjectWrapper, HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping_1                        (None)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputActionKeyMapping      K2Node_Select_Default                                            (ConstParm)
// struct FInputActionKeyMapping      K2Node_Select_Default_1                                          (ConstParm)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TemplateInputAction_C::CheckActionIsDefault(bool* IsDefault_, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FKey& K2Node_MakeStruct_Key, const struct FKey& K2Node_MakeStruct_Key_1, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FInputActionKeyMapping& K2Node_Select_Default, const struct FInputActionKeyMapping& K2Node_Select_Default_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "CheckActionIsDefault");

	Params::UW_TemplateInputAction_C_CheckActionIsDefault_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeStruct_Key = K2Node_MakeStruct_Key;
	Parms.K2Node_MakeStruct_Key_1 = K2Node_MakeStruct_Key_1;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.K2Node_MakeStruct_InputActionKeyMapping_1 = K2Node_MakeStruct_InputActionKeyMapping_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDefault_ != nullptr)
		*IsDefault_ = Parms.IsDefault_;

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.ActualiseInputKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IgnoreCheckDefault                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_MakeStruct_Key                                            (HasGetValueTypeHash)
// struct FKey                        K2Node_MakeStruct_Key_1                                          (HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping_1                        (None)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckActionIsDefault_IsDefault_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_Select_Default                                            (ConstParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_Select_Default_1                                          (ConstParm)
// struct FInputChord                 K2Node_MakeStruct_InputChord_1                                   (HasGetValueTypeHash)

void UW_TemplateInputAction_C::ActualiseInputKey(bool IgnoreCheckDefault, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FKey& K2Node_MakeStruct_Key, const struct FKey& K2Node_MakeStruct_Key_1, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_CheckActionIsDefault_IsDefault_, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FInputActionKeyMapping& K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FInputChord& K2Node_MakeStruct_InputChord, const struct FInputActionKeyMapping& K2Node_Select_Default_1, const struct FInputChord& K2Node_MakeStruct_InputChord_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "ActualiseInputKey");

	Params::UW_TemplateInputAction_C_ActualiseInputKey_Params Parms{};

	Parms.IgnoreCheckDefault = IgnoreCheckDefault;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeStruct_Key = K2Node_MakeStruct_Key;
	Parms.K2Node_MakeStruct_Key_1 = K2Node_MakeStruct_Key_1;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.K2Node_MakeStruct_InputActionKeyMapping_1 = K2Node_MakeStruct_InputActionKeyMapping_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_CheckActionIsDefault_IsDefault_ = CallFunc_CheckActionIsDefault_IsDefault_;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_InputChord_1 = K2Node_MakeStruct_InputChord_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.CheckForRename
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputKeySelector*           InputRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_found                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Local_Rename                                                     (Edit, BlueprintVisible)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_MakeStruct_Key                                            (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_KeysName                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

void UW_TemplateInputAction_C::CheckForRename(class UInputKeySelector* InputRef, const class FString& Local_found, class FText Local_Rename, const class FString& CallFunc_GetDisplayName_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, const struct FKey& K2Node_MakeStruct_Key, const struct FInputChord& K2Node_MakeStruct_InputChord, int32 Temp_int_Variable_1, bool Temp_bool_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 K2Node_Select_Default, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_KeysName& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Contains_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "CheckForRename");

	Params::UW_TemplateInputAction_C_CheckForRename_Params Parms{};

	Parms.InputRef = InputRef;
	Parms.Local_found = Local_found;
	Parms.Local_Rename = Local_Rename;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MakeStruct_Key = K2Node_MakeStruct_Key;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.MSG_ChangeSensitivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Sensitivity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TemplateInputAction_C::MSG_ChangeSensitivity(float Sensitivity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "MSG_ChangeSensitivity");

	Params::UW_TemplateInputAction_C_MSG_ChangeSensitivity_Params Parms{};

	Parms.Sensitivity = Sensitivity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.MSG_ChangeInvertMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InvertMouse                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TemplateInputAction_C::MSG_ChangeInvertMouse(bool InvertMouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "MSG_ChangeInvertMouse");

	Params::UW_TemplateInputAction_C_MSG_ChangeInvertMouse_Params Parms{};

	Parms.InvertMouse = InvertMouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.MSG_ChangeGameplaySetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TemplateUI            Setting                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TemplateInputAction_C::MSG_ChangeGameplaySetting(enum class E_TemplateUI Setting, int32 Index, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "MSG_ChangeGameplaySetting");

	Params::UW_TemplateInputAction_C_MSG_ChangeGameplaySetting_Params Parms{};

	Parms.Setting = Setting;
	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.RestoreAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TemplateInputAction_C::RestoreAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "RestoreAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.SetDefaultKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TemplateInputAction_C::SetDefaultKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "SetDefaultKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.ReloadBackupAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TemplateInputAction_C::ReloadBackupAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "ReloadBackupAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.MakeBackupAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TemplateInputAction_C::MakeBackupAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "MakeBackupAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TemplateInputAction_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "PreConstruct");

	Params::UW_TemplateInputAction_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_TemplateInputAction_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_TemplateInputAction_C::BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");

	Params::UW_TemplateInputAction_C_BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.BndEvt__InputKey_S_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_TemplateInputAction_C::BndEvt__InputKey_S_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "BndEvt__InputKey_S_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");

	Params::UW_TemplateInputAction_C_BndEvt__InputKey_S_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.EditMyKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_TemplateInputAction_C::EditMyKey(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "EditMyKey");

	Params::UW_TemplateInputAction_C_EditMyKey_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_TemplateInputAction_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "OnMouseEnter");

	Params::UW_TemplateInputAction_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_TemplateInputAction_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "OnMouseLeave");

	Params::UW_TemplateInputAction_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.MouseEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TemplateInputAction_C::MouseEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "MouseEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.MouseLeave
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TemplateInputAction_C::MouseLeave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "MouseLeave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.MakeAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TemplateInputAction_C::MakeAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "MakeAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.BndEvt__InputKey_P_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_TemplateInputAction_C::BndEvt__InputKey_P_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "BndEvt__InputKey_P_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.BndEvt__InputKey_S_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_TemplateInputAction_C::BndEvt__InputKey_S_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "BndEvt__InputKey_S_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.CheckForStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowStyle_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TemplateInputAction_C::CheckForStyle(bool ShowStyle_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "CheckForStyle");

	Params::UW_TemplateInputAction_C_CheckForStyle_Params Parms{};

	Parms.ShowStyle_ = ShowStyle_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateInputAction.W_TemplateInputAction_C.ExecuteUbergraph_W_TemplateInputAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Sensitivity                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InvertMouse                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_TemplateUI            K2Node_Event_Setting                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_2                         (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_1                         (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey                           (HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_MakeStruct_Key                                            (HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_Select_Default_1                                          (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// bool                               CallFunc_SetMappingsActionArray_KeyAlreadyExist_                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputActionKeyMapping>CallFunc_SetMappingsActionArray_NewMappings                      (ReferenceParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasUserFocus_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ShowStyle_                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_1                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_2                                   (HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping_1                        (None)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping_2                        (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue_1                        (None)

void UW_TemplateInputAction_C::ExecuteUbergraph_W_TemplateInputAction(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_3, float K2Node_Event_Sensitivity, bool K2Node_Event_InvertMouse, enum class E_TemplateUI K2Node_Event_Setting, int32 K2Node_Event_Index, float K2Node_Event_Value, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool Temp_bool_Variable_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_Event_IsDesignTime, float CallFunc_FClamp_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Variable, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_2, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 Temp_int_Variable_1, bool Temp_bool_Variable_4, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_KeyKey_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, const struct FKey& K2Node_MakeStruct_Key, float Temp_float_Variable, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FKey& K2Node_Select_Default_1, bool Temp_bool_Variable_5, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, float K2Node_Select_Default_2, const struct FInputChord& K2Node_MakeStruct_InputChord, bool CallFunc_SetMappingsActionArray_KeyAlreadyExist_, TArray<struct FInputActionKeyMapping>& CallFunc_SetMappingsActionArray_NewMappings, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue_1, bool K2Node_Event_ShowStyle_, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, class FName CallFunc_Conv_StringToName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility K2Node_Select_Default_5, const struct FInputChord& K2Node_MakeStruct_InputChord_1, const struct FInputChord& K2Node_MakeStruct_InputChord_2, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_2, class FText CallFunc_Key_GetDisplayName_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateInputAction_C", "ExecuteUbergraph_W_TemplateInputAction");

	Params::UW_TemplateInputAction_C_ExecuteUbergraph_W_TemplateInputAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.K2Node_Event_Sensitivity = K2Node_Event_Sensitivity;
	Parms.K2Node_Event_InvertMouse = K2Node_Event_InvertMouse;
	Parms.K2Node_Event_Setting = K2Node_Event_Setting;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_2 = K2Node_ComponentBoundEvent_SelectedKey_2;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_1 = K2Node_ComponentBoundEvent_SelectedKey_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_SelectedKey = K2Node_ComponentBoundEvent_SelectedKey;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.K2Node_MakeStruct_Key = K2Node_MakeStruct_Key;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.CallFunc_SetMappingsActionArray_KeyAlreadyExist_ = CallFunc_SetMappingsActionArray_KeyAlreadyExist_;
	Parms.CallFunc_SetMappingsActionArray_NewMappings = CallFunc_SetMappingsActionArray_NewMappings;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;
	Parms.CallFunc_HasUserFocus_ReturnValue_1 = CallFunc_HasUserFocus_ReturnValue_1;
	Parms.K2Node_Event_ShowStyle_ = K2Node_Event_ShowStyle_;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_MakeStruct_InputChord_1 = K2Node_MakeStruct_InputChord_1;
	Parms.K2Node_MakeStruct_InputChord_2 = K2Node_MakeStruct_InputChord_2;
	Parms.K2Node_MakeStruct_InputActionKeyMapping_1 = K2Node_MakeStruct_InputActionKeyMapping_1;
	Parms.K2Node_MakeStruct_InputActionKeyMapping_2 = K2Node_MakeStruct_InputActionKeyMapping_2;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue_1 = CallFunc_Key_GetDisplayName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


