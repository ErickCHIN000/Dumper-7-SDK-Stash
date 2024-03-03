#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_01_dlg_2d_layout.w_01_dlg_2d_layout_C
// (None)

class UClass* UW_01_dlg_2d_layout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_01_dlg_2d_layout_C");

	return Clss;
}


// w_01_dlg_2d_layout_C w_01_dlg_2d_layout.Default__w_01_dlg_2d_layout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_01_dlg_2d_layout_C* UW_01_dlg_2d_layout_C::GetDefaultObj()
{
	static class UW_01_dlg_2d_layout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_01_dlg_2d_layout_C*>(UW_01_dlg_2d_layout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_01_dlg_2d_layout.w_01_dlg_2d_layout_C.set_child_layout
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UW_01_dlg_3d_layout_C*>Child_widgets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UW_01_dlg_2d_layout_C::Set_child_layout(TArray<class UW_01_dlg_3d_layout_C*>& Child_widgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_2d_layout_C", "set_child_layout");

	Params::UW_01_dlg_2d_layout_C_Set_child_layout_Params Parms{};

	Parms.Child_widgets = Child_widgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_dlg_2d_layout.w_01_dlg_2d_layout_C.get_child_layout
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Widget_index                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_dlg_3d_layout_C*       Widget_reference                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_dlg_3d_layout_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_dlg_2d_layout_C::Get_child_layout(int32 Widget_index, bool* Is_valid, class UW_01_dlg_3d_layout_C** Widget_reference, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_01_dlg_3d_layout_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_2d_layout_C", "get_child_layout");

	Params::UW_01_dlg_2d_layout_C_Get_child_layout_Params Parms{};

	Parms.Widget_index = Widget_index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Widget_reference != nullptr)
		*Widget_reference = Parms.Widget_reference;

}


// Function w_01_dlg_2d_layout.w_01_dlg_2d_layout_C.init_widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_dlg_2d_layout_C::Init_widget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_2d_layout_C", "init_widget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_dlg_2d_layout.w_01_dlg_2d_layout_C.ExecuteUbergraph_w_01_dlg_2d_layout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_01_dlg_3d_layout_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UW_01_dlg_2d_layout_C::ExecuteUbergraph_w_01_dlg_2d_layout(int32 EntryPoint, TArray<class UW_01_dlg_3d_layout_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_2d_layout_C", "ExecuteUbergraph_w_01_dlg_2d_layout");

	Params::UW_01_dlg_2d_layout_C_ExecuteUbergraph_w_01_dlg_2d_layout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


