#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C
// (None)

class UClass* UUMG_ArrowSelectionWidget_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ArrowSelectionWidget_Base_C");

	return Clss;
}


// UMG_ArrowSelectionWidget_Base_C UMG_ArrowSelectionWidget_Base.Default__UMG_ArrowSelectionWidget_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ArrowSelectionWidget_Base_C* UUMG_ArrowSelectionWidget_Base_C::GetDefaultObj()
{
	static class UUMG_ArrowSelectionWidget_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ArrowSelectionWidget_Base_C*>(UUMG_ArrowSelectionWidget_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.GetSelectedOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        SelectedRow                                                      (Parm, OutParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Array_Get_Item                                          (None)

void UUMG_ArrowSelectionWidget_Base_C::GetSelectedOption(class FText* SelectedRow, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArrowSelectionWidget_Base_C", "GetSelectedOption");

	Params::UUMG_ArrowSelectionWidget_Base_C_GetSelectedOption_Params Parms{};

	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedRow != nullptr)
		*SelectedRow = Parms.SelectedRow;

}


// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.UpdateVisuals
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ArrowSelectionWidget_Base_C::UpdateVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArrowSelectionWidget_Base_C", "UpdateVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.ChangeSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ArrowSelectionWidget_Base_C::ChangeSelection(int32 Index, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArrowSelectionWidget_Base_C", "ChangeSelection");

	Params::UUMG_ArrowSelectionWidget_Base_C_ChangeSelection_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClearIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddOption_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ArrowSelectionWidget_Base_C::ClearOptions(bool ClearIndex, int32 CallFunc_AddOption_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArrowSelectionWidget_Base_C", "ClearOptions");

	Params::UUMG_ArrowSelectionWidget_Base_C_ClearOptions_Params Parms{};

	Parms.ClearIndex = ClearIndex;
	Parms.CallFunc_AddOption_Index = CallFunc_AddOption_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.AddOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ArrowSelectionWidget_Base_C::AddOption(class FText Option, int32* Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArrowSelectionWidget_Base_C", "AddOption");

	Params::UUMG_ArrowSelectionWidget_Base_C_AddOption_Params Parms{};

	Parms.Option = Option;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ArrowSelectionWidget_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArrowSelectionWidget_Base_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.ExecuteUbergraph_UMG_ArrowSelectionWidget_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ArrowSelectionWidget_Base_C::ExecuteUbergraph_UMG_ArrowSelectionWidget_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArrowSelectionWidget_Base_C", "ExecuteUbergraph_UMG_ArrowSelectionWidget_Base");

	Params::UUMG_ArrowSelectionWidget_Base_C_ExecuteUbergraph_UMG_ArrowSelectionWidget_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.SelectionUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ArrowSelectionWidget_Base_C::SelectionUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArrowSelectionWidget_Base_C", "SelectionUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


