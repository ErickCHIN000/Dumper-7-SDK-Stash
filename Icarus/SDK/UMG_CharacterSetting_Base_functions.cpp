#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C
// (None)

class UClass* UUMG_CharacterSetting_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CharacterSetting_Base_C");

	return Clss;
}


// UMG_CharacterSetting_Base_C UMG_CharacterSetting_Base.Default__UMG_CharacterSetting_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CharacterSetting_Base_C* UUMG_CharacterSetting_Base_C::GetDefaultObj()
{
	static class UUMG_CharacterSetting_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CharacterSetting_Base_C*>(UUMG_CharacterSetting_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.VerifySettingsValid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_Base_C::VerifySettingsValid(bool IsValid, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, const struct FRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Base_C", "VerifySettingsValid");

	Params::UUMG_CharacterSetting_Base_C_VerifySettingsValid_Params Parms{};

	Parms.IsValid = IsValid;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.GetSelectionDisplayName
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (Parm, OutParm)

void UUMG_CharacterSetting_Base_C::GetSelectionDisplayName(class FText* DisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Base_C", "GetSelectionDisplayName");

	Params::UUMG_CharacterSetting_Base_C_GetSelectionDisplayName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = Parms.DisplayName;

}


// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.GetSelectedOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRowHandle                  SelectedRow                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRowHandle                  CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSetting_Base_C::GetSelectedOption(struct FRowHandle* SelectedRow, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FRowHandle& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Base_C", "GetSelectedOption");

	Params::UUMG_CharacterSetting_Base_C_GetSelectedOption_Params Parms{};

	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedRow != nullptr)
		*SelectedRow = std::move(Parms.SelectedRow);

}


// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.UpdateVisuals
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSetting_Base_C::UpdateVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Base_C", "UpdateVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.ChangeSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_Base_C::ChangeSelection(int32 Index, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Base_C", "ChangeSelection");

	Params::UUMG_CharacterSetting_Base_C_ChangeSelection_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClearIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddOption_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSetting_Base_C::ClearOptions(bool ClearIndex, int32 CallFunc_AddOption_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Base_C", "ClearOptions");

	Params::UUMG_CharacterSetting_Base_C_ClearOptions_Params Parms{};

	Parms.ClearIndex = ClearIndex;
	Parms.CallFunc_AddOption_Index = CallFunc_AddOption_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.AddOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRowHandle                  Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSetting_Base_C::AddOption(const struct FRowHandle& Option, int32* Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Base_C", "AddOption");

	Params::UUMG_CharacterSetting_Base_C_AddOption_Params Parms{};

	Parms.Option = Option;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CharacterSetting_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Base_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.ExecuteUbergraph_UMG_CharacterSetting_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSetting_Base_C::ExecuteUbergraph_UMG_CharacterSetting_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Base_C", "ExecuteUbergraph_UMG_CharacterSetting_Base");

	Params::UUMG_CharacterSetting_Base_C_ExecuteUbergraph_UMG_CharacterSetting_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.SelectionUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPreviewCameraSettingsEnum  NewFocus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_CharacterSetting_Base_C::SelectionUpdated__DelegateSignature(int32 Index, const struct FPreviewCameraSettingsEnum& NewFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Base_C", "SelectionUpdated__DelegateSignature");

	Params::UUMG_CharacterSetting_Base_C_SelectionUpdated__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.NewFocus = NewFocus;

	UObject::ProcessEvent(Func, &Parms);

}

}


