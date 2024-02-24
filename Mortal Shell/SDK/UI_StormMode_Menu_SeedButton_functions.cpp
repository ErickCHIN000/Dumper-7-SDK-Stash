#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C
// (None)

class UClass* UUI_StormMode_Menu_SeedButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_Menu_SeedButton_C");

	return Clss;
}


// UI_StormMode_Menu_SeedButton_C UI_StormMode_Menu_SeedButton.Default__UI_StormMode_Menu_SeedButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_Menu_SeedButton_C* UUI_StormMode_Menu_SeedButton_C::GetDefaultObj()
{
	static class UUI_StormMode_Menu_SeedButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_Menu_SeedButton_C*>(UUI_StormMode_Menu_SeedButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.IsButtonEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_SeedButton_C::IsButtonEnabled(bool* Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "IsButtonEnabled");

	Params::UUI_StormMode_Menu_SeedButton_C_IsButtonEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled_ != nullptr)
		*Enabled_ = Parms.Enabled_;

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.SeedButtonsVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InOpacity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_SeedButton_C::SeedButtonsVisibility(enum class ESlateVisibility InVisibility, float InOpacity, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "SeedButtonsVisibility");

	Params::UUI_StormMode_Menu_SeedButton_C_SeedButtonsVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;
	Parms.InOpacity = InOpacity;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSeedButtons_Array = CallFunc_GetSeedButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.CreateMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::CreateMIDs(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "CreateMIDs");

	Params::UUI_StormMode_Menu_SeedButton_C_CreateMIDs_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.NavLeftRight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  Local_Widget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array_1                                  (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array_2                                  (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_SeedButton_C::NavLeftRight(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Delta, class UUI_StormMode_SeedButton_C* Widget, int32 Index, int32 Local_IndexSelected, class UUI_StormMode_SeedButton_C* Local_Widget, int32 Local_Delta, bool Local_SkipSound, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array_2, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Find_ReturnValue, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "NavLeftRight");

	Params::UUI_StormMode_Menu_SeedButton_C_NavLeftRight_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.SkipSound = SkipSound;
	Parms.Delta = Delta;
	Parms.Widget = Widget;
	Parms.Index = Index;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Local_Widget = Local_Widget;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.CallFunc_GetSeedButtons_Array = CallFunc_GetSeedButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSeedButtons_Array_1 = CallFunc_GetSeedButtons_Array_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetSeedButtons_Array_2 = CallFunc_GetSeedButtons_Array_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.GetMin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_StormMode_Menu_SeedButton_C::GetMin(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "GetMin");

	Params::UUI_StormMode_Menu_SeedButton_C_GetMin_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.NavUpDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  Local_Widget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array_1                                  (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_GetMin_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMin_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::NavUpDown(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Delta, class UUI_StormMode_SeedButton_C* Widget, int32 Index, int32 Local_IndexSelected, class UUI_StormMode_SeedButton_C* Local_Widget, int32 Local_Delta, bool Local_SkipSound, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array_1, int32 CallFunc_GetMin_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_GetMin_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "NavUpDown");

	Params::UUI_StormMode_Menu_SeedButton_C_NavUpDown_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.SkipSound = SkipSound;
	Parms.Delta = Delta;
	Parms.Widget = Widget;
	Parms.Index = Index;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Local_Widget = Local_Widget;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetSeedButtons_Array = CallFunc_GetSeedButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetSeedButtons_Array_1 = CallFunc_GetSeedButtons_Array_1;
	Parms.CallFunc_GetMin_ReturnValue = CallFunc_GetMin_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetMin_ReturnValue_1 = CallFunc_GetMin_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.GetSeedButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_StormMode_SeedButton_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_StormMode_SeedButton_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::GetSeedButtons(TArray<class UUI_StormMode_SeedButton_C*>* Array, TArray<class UUI_StormMode_SeedButton_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "GetSeedButtons");

	Params::UUI_StormMode_Menu_SeedButton_C_GetSeedButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.Sound_OnValueChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_SeedButton_C::Sound_OnValueChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "Sound_OnValueChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.SetHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::SetHighlighted(bool Highlighted, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "SetHighlighted");

	Params::UUI_StormMode_Menu_SeedButton_C_SetHighlighted_Params Parms{};

	Parms.Highlighted = Highlighted;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.UpdateSettingValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Values                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::UpdateSettingValues(TArray<class FText>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "UpdateSettingValues");

	Params::UUI_StormMode_Menu_SeedButton_C_UpdateSettingValues_Params Parms{};

	Parms.Values = Values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.Value_Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_SeedButton_C::Value_Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "Value_Next");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.Value_Previous
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_SeedButton_C::Value_Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "Value_Previous");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.Value_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_SeedButton_C::Value_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "Value_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.UpdateSettingName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_StormMode_Menu_SeedButton_C::UpdateSettingName(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "UpdateSettingName");

	Params::UUI_StormMode_Menu_SeedButton_C_UpdateSettingName_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.ForceSelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_SeedButton_C::ForceSelectButton(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "ForceSelectButton");

	Params::UUI_StormMode_Menu_SeedButton_C_ForceSelectButton_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.EnableOrDisableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_SeedButton_C::EnableOrDisableButton(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "EnableOrDisableButton");

	Params::UUI_StormMode_Menu_SeedButton_C_EnableOrDisableButton_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.OverrideCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::OverrideCurrentValue(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "OverrideCurrentValue");

	Params::UUI_StormMode_Menu_SeedButton_C_OverrideCurrentValue_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.UpdateIndexes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Indexes                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::UpdateIndexes(TArray<int32>& Indexes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "UpdateIndexes");

	Params::UUI_StormMode_Menu_SeedButton_C_UpdateIndexes_Params Parms{};

	Parms.Indexes = Indexes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_SeedButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_SeedButton_C::SelectButton(bool Select_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "SelectButton");

	Params::UUI_StormMode_Menu_SeedButton_C_SelectButton_Params Parms{};

	Parms.Select_ = Select_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.HighlightButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlight_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_SeedButton_C::HighlightButton(bool Highlight_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "HighlightButton");

	Params::UUI_StormMode_Menu_SeedButton_C_HighlightButton_Params Parms{};

	Parms.Highlight_ = Highlight_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.SetParentRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::SetParentRef(class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "SetParentRef");

	Params::UUI_StormMode_Menu_SeedButton_C_SetParentRef_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.DeactivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_SeedButton_C::DeactivateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "DeactivateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.ActivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_SeedButton_C::ActivateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "ActivateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_SeedButton_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "BndEvt__Button_Setting_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.NavHorizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::NavHorizontal(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "NavHorizontal");

	Params::UUI_StormMode_Menu_SeedButton_C_NavHorizontal_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.NavVertical
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::NavVertical(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "NavVertical");

	Params::UUI_StormMode_Menu_SeedButton_C_NavVertical_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.OnArrowHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_StormMode_SeedButton_C*  Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::OnArrowHovered(class UUI_StormMode_SeedButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "OnArrowHovered");

	Params::UUI_StormMode_Menu_SeedButton_C_OnArrowHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.OnArrowClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::OnArrowClicked(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "OnArrowClicked");

	Params::UUI_StormMode_Menu_SeedButton_C_OnArrowClicked_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_SeedButton_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "BndEvt__Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_SeedButton_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "BndEvt__Button_Setting_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.ExecuteUbergraph_UI_StormMode_Menu_SeedButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_Event_Values                                              (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (None)
// bool                               K2Node_Event_Select                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Enable                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_Event_Indexes                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_Event_Select_                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Highlight_                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Event_Parent                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Delta_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Delta                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_SeedButton_C::ExecuteUbergraph_UI_StormMode_Menu_SeedButton(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FText>& K2Node_Event_Values, class FText K2Node_Event_Text, bool K2Node_Event_Select, bool K2Node_Event_Enable, int32 K2Node_Event_Index, TArray<int32>& K2Node_Event_Indexes, bool K2Node_Event_Select_, bool K2Node_Event_Highlight_, class UWidget* K2Node_Event_Parent, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Event_Delta_1, int32 K2Node_Event_Delta, class UUI_StormMode_SeedButton_C* K2Node_CustomEvent_Widget, int32 K2Node_CustomEvent_Delta, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "ExecuteUbergraph_UI_StormMode_Menu_SeedButton");

	Params::UUI_StormMode_Menu_SeedButton_C_ExecuteUbergraph_UI_StormMode_Menu_SeedButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_Values = K2Node_Event_Values;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_Event_Select = K2Node_Event_Select;
	Parms.K2Node_Event_Enable = K2Node_Event_Enable;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_Indexes = K2Node_Event_Indexes;
	Parms.K2Node_Event_Select_ = K2Node_Event_Select_;
	Parms.K2Node_Event_Highlight_ = K2Node_Event_Highlight_;
	Parms.K2Node_Event_Parent = K2Node_Event_Parent;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Delta_1 = K2Node_Event_Delta_1;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CustomEvent_Delta = K2Node_CustomEvent_Delta;
	Parms.CallFunc_GetSeedButtons_Array = CallFunc_GetSeedButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C.OnSettingConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_SeedButton_C::OnSettingConfirmed__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_SeedButton_C", "OnSettingConfirmed__DelegateSignature");

	Params::UUI_StormMode_Menu_SeedButton_C_OnSettingConfirmed__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


