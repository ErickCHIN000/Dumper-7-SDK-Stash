#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Checkbox.UMG_Checkbox_C
// (None)

class UClass* UUMG_Checkbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Checkbox_C");

	return Clss;
}


// UMG_Checkbox_C UMG_Checkbox.Default__UMG_Checkbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Checkbox_C* UUMG_Checkbox_C::GetDefaultObj()
{
	static class UUMG_Checkbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Checkbox_C*>(UUMG_Checkbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Checkbox.UMG_Checkbox_C.ManuallyCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Checkbox_C::ManuallyCheck(bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Checkbox_C", "ManuallyCheck");

	Params::UUMG_Checkbox_C_ManuallyCheck_Params Parms{};

	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Checkbox.UMG_Checkbox_C.BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Checkbox_C::BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Checkbox_C", "BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Checkbox.UMG_Checkbox_C.ExecuteUbergraph_UMG_Checkbox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Checked                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Checkbox_C::ExecuteUbergraph_UMG_Checkbox(int32 EntryPoint, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_Checked, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Checkbox_C", "ExecuteUbergraph_UMG_Checkbox");

	Params::UUMG_Checkbox_C_ExecuteUbergraph_UMG_Checkbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Checked = K2Node_CustomEvent_Checked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Checkbox.UMG_Checkbox_C.Updated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WasForced                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Checkbox_C::Updated__DelegateSignature(bool Checked, bool WasForced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Checkbox_C", "Updated__DelegateSignature");

	Params::UUMG_Checkbox_C_Updated__DelegateSignature_Params Parms{};

	Parms.Checked = Checked;
	Parms.WasForced = WasForced;

	UObject::ProcessEvent(Func, &Parms);

}

}


