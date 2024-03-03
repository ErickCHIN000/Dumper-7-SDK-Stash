#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_01_dlg_3d_layout.w_01_dlg_3d_layout_C
// (None)

class UClass* UW_01_dlg_3d_layout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_01_dlg_3d_layout_C");

	return Clss;
}


// w_01_dlg_3d_layout_C w_01_dlg_3d_layout.Default__w_01_dlg_3d_layout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_01_dlg_3d_layout_C* UW_01_dlg_3d_layout_C::GetDefaultObj()
{
	static class UW_01_dlg_3d_layout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_01_dlg_3d_layout_C*>(UW_01_dlg_3d_layout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.find_choice_by_id
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Choice_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Choice_index                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_01_dlg_3d_layout_C::Find_choice_by_id(class FName Choice_id, bool* Is_valid, int32* Choice_index, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "find_choice_by_id");

	Params::UW_01_dlg_3d_layout_C_Find_choice_by_id_Params Parms{};

	Parms.Choice_id = Choice_id;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Choice_index != nullptr)
		*Choice_index = Parms.Choice_index;

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.find_visible_list
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Widget_index                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    Widget_ref                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    Found_widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_visible                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_03_dlg_parent_input_C*>Local_widget_list                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_01_dlg_3d_layout_C::Find_visible_list(int32 Widget_index, class UW_03_dlg_parent_input_C* Widget_ref, bool* Is_valid, int32* Found_index, class UW_03_dlg_parent_input_C** Found_widget, bool* Is_visible, const TArray<class UW_03_dlg_parent_input_C*>& Local_widget_list, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "find_visible_list");

	Params::UW_01_dlg_3d_layout_C_Find_visible_list_Params Parms{};

	Parms.Widget_index = Widget_index;
	Parms.Widget_ref = Widget_ref;
	Parms.Local_widget_list = Local_widget_list;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Found_index != nullptr)
		*Found_index = Parms.Found_index;

	if (Found_widget != nullptr)
		*Found_widget = Parms.Found_widget;

	if (Is_visible != nullptr)
		*Is_visible = Parms.Is_visible;

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.parent_layout_tick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta_seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      Local_widgets_opacity                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MaxOfFloatArray_IndexOfMaxValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MaxOfFloatArray_MaxValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_dlg_3d_layout_C::Parent_layout_tick(float Delta_seconds, const TArray<float>& Local_widgets_opacity, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "parent_layout_tick");

	Params::UW_01_dlg_3d_layout_C_Parent_layout_tick_Params Parms{};

	Parms.Delta_seconds = Delta_seconds;
	Parms.Local_widgets_opacity = Local_widgets_opacity;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_MaxOfFloatArray_IndexOfMaxValue = CallFunc_MaxOfFloatArray_IndexOfMaxValue;
	Parms.CallFunc_MaxOfFloatArray_MaxValue = CallFunc_MaxOfFloatArray_MaxValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.get_child_widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot_index                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_03_dlg_parent_input_C*    Widget_reference                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_03_dlg_parent_input_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_dlg_3d_layout_C::Get_child_widget(int32 Slot_index, bool* Is_valid, class UW_03_dlg_parent_input_C** Widget_reference, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "get_child_widget");

	Params::UW_01_dlg_3d_layout_C_Get_child_widget_Params Parms{};

	Parms.Slot_index = Slot_index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Widget_reference != nullptr)
		*Widget_reference = Parms.Widget_reference;

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.init_3d_layout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_layout_widget_3d_C*  bp_widget_parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_widget_info          Widget_base                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_dlg_3d_layout_C::Init_3d_layout(class Abp_dlg_layout_widget_3d_C* bp_widget_parent, const struct FS_dlg_widget_info& Widget_base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "init_3d_layout");

	Params::UW_01_dlg_3d_layout_C_Init_3d_layout_Params Parms{};

	Parms.bp_widget_parent = bp_widget_parent;
	Parms.Widget_base = Widget_base;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.layout_clear_widgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_dlg_3d_layout_C::Layout_clear_widgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "layout_clear_widgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_dlg_3d_layout_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "Tick");

	Params::UW_01_dlg_3d_layout_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.select_child
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Select_direction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Select_index                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               by_input                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_01_dlg_3d_layout_C::Select_child(int32 Select_direction, bool Select_index, bool by_input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "select_child");

	Params::UW_01_dlg_3d_layout_C_Select_child_Params Parms{};

	Parms.Select_direction = Select_direction;
	Parms.Select_index = Select_index;
	Parms.by_input = by_input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.accept_child
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               by_mouse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Mouse_index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_dlg_3d_layout_C::Accept_child(bool by_mouse, int32 Mouse_index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "accept_child");

	Params::UW_01_dlg_3d_layout_C_Accept_child_Params Parms{};

	Parms.by_mouse = by_mouse;
	Parms.Mouse_index = Mouse_index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_01_dlg_3d_layout_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "PreConstruct");

	Params::UW_01_dlg_3d_layout_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_01_dlg_3d_layout_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.layout_fade_selections
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_dlg_3d_layout_C::Layout_fade_selections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "layout_fade_selections");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.select_by_mouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_03_dlg_parent_input_C*    Widget_reference                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_dlg_3d_layout_C::Select_by_mouse(class UW_03_dlg_parent_input_C* Widget_reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "select_by_mouse");

	Params::UW_01_dlg_3d_layout_C_Select_by_mouse_Params Parms{};

	Parms.Widget_reference = Widget_reference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.init_action
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_widget_choice        Widget_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Last_index                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_dlg_3d_layout_C::Init_action(const struct FS_dlg_branch_choice_info& Choice_info, const struct FS_dlg_widget_choice& Widget_info, int32 Last_index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "init_action");

	Params::UW_01_dlg_3d_layout_C_Init_action_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Widget_info = Widget_info;
	Parms.Last_index = Last_index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.accept_visual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Choice_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_dlg_3d_layout_C::Accept_visual(class FName Choice_id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "accept_visual");

	Params::UW_01_dlg_3d_layout_C_Accept_visual_Params Parms{};

	Parms.Choice_id = Choice_id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.choices_loaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_dlg_3d_layout_C::Choices_loaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "choices_loaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_dlg_3d_layout.w_01_dlg_3d_layout_C.ExecuteUbergraph_w_01_dlg_3d_layout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_layout_widget_3d_C*  K2Node_CustomEvent_bp_widget_parent                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_widget_info          K2Node_CustomEvent_widget_base                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_04_dlg_input_light_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_select_direction                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_select_index                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_by_input                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_by_mouse                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_mouse_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    K2Node_CustomEvent_widget_reference                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_visible_list_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_find_visible_list_found_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_find_visible_list_found_widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_visible_list_is_visible                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   K2Node_CustomEvent_choice_info                                   (HasGetValueTypeHash)
// struct FS_dlg_widget_choice        K2Node_CustomEvent_widget_info                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_last_index                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_choice_Id                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_find_choice_by_id_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_find_choice_by_id_choice_index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_find_visible_list_is_valid_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_find_visible_list_found_index_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_find_visible_list_found_widget_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_visible_list_is_visible_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_find_visible_list_is_valid_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_find_visible_list_found_index_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_find_visible_list_found_widget_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_visible_list_is_visible_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_subtitle_widget_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_02_dlg_2d_subtitles_C*    CallFunc_get_subtitle_widget_subtitles_widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_find_visible_list_is_valid_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_find_visible_list_found_index_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_find_visible_list_found_widget_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_visible_list_is_visible_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_find_visible_list_is_valid_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_find_visible_list_found_index_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_find_visible_list_found_widget_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_visible_list_is_visible_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_find_visible_list_is_valid_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_find_visible_list_found_index_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_find_visible_list_found_widget_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_find_visible_list_is_visible_5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_03_dlg_parent_input_C*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_choice_by_id_is_valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_choice_by_id_branch_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_choice_by_id_choice_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_data   CallFunc_get_choice_by_id_choice_data                            (HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   CallFunc_get_choice_by_id_choice_info                            (HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_01_dlg_3d_layout_C::ExecuteUbergraph_w_01_dlg_3d_layout(int32 EntryPoint, int32 Temp_int_Variable, class Abp_dlg_layout_widget_3d_C* K2Node_CustomEvent_bp_widget_parent, const struct FS_dlg_widget_info& K2Node_CustomEvent_widget_base, class UW_04_dlg_input_light_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Max_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_CustomEvent_select_direction, bool K2Node_CustomEvent_select_index, bool K2Node_CustomEvent_by_input, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_by_mouse, int32 K2Node_CustomEvent_mouse_index, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, int32 CallFunc_Max_ReturnValue_1, class UW_03_dlg_parent_input_C* K2Node_CustomEvent_widget_reference, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_find_visible_list_is_valid, int32 CallFunc_find_visible_list_found_index, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget, bool CallFunc_find_visible_list_is_visible, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Max_ReturnValue_2, const struct FS_dlg_branch_choice_info& K2Node_CustomEvent_choice_info, const struct FS_dlg_widget_choice& K2Node_CustomEvent_widget_info, int32 K2Node_CustomEvent_last_index, int32 Temp_int_Variable_1, class FName K2Node_CustomEvent_choice_Id, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_find_choice_by_id_is_valid, int32 CallFunc_find_choice_by_id_choice_index, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_find_visible_list_is_valid_1, int32 CallFunc_find_visible_list_found_index_1, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget_1, bool CallFunc_find_visible_list_is_visible_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_find_visible_list_is_valid_2, int32 CallFunc_find_visible_list_found_index_2, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget_2, bool CallFunc_find_visible_list_is_visible_2, bool CallFunc_get_subtitle_widget_is_valid, class UW_02_dlg_2d_subtitles_C* CallFunc_get_subtitle_widget_subtitles_widget, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_find_visible_list_is_valid_3, int32 CallFunc_find_visible_list_found_index_3, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget_3, bool CallFunc_find_visible_list_is_visible_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_find_visible_list_is_valid_4, int32 CallFunc_find_visible_list_found_index_4, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget_4, bool CallFunc_find_visible_list_is_visible_4, int32 Temp_int_Array_Index_Variable, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_LastIndex_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_find_visible_list_is_valid_5, int32 CallFunc_find_visible_list_found_index_5, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget_5, bool CallFunc_find_visible_list_is_visible_5, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Array_Index_Variable_2, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_get_choice_by_id_is_valid, int32 CallFunc_get_choice_by_id_branch_index, int32 CallFunc_get_choice_by_id_choice_index, const struct FS_dlg_branch_choice_data& CallFunc_get_choice_by_id_choice_data, const struct FS_dlg_branch_choice_info& CallFunc_get_choice_by_id_choice_info, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_dlg_3d_layout_C", "ExecuteUbergraph_w_01_dlg_3d_layout");

	Params::UW_01_dlg_3d_layout_C_ExecuteUbergraph_w_01_dlg_3d_layout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CustomEvent_bp_widget_parent = K2Node_CustomEvent_bp_widget_parent;
	Parms.K2Node_CustomEvent_widget_base = K2Node_CustomEvent_widget_base;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_select_direction = K2Node_CustomEvent_select_direction;
	Parms.K2Node_CustomEvent_select_index = K2Node_CustomEvent_select_index;
	Parms.K2Node_CustomEvent_by_input = K2Node_CustomEvent_by_input;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_by_mouse = K2Node_CustomEvent_by_mouse;
	Parms.K2Node_CustomEvent_mouse_index = K2Node_CustomEvent_mouse_index;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.K2Node_CustomEvent_widget_reference = K2Node_CustomEvent_widget_reference;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_find_visible_list_is_valid = CallFunc_find_visible_list_is_valid;
	Parms.CallFunc_find_visible_list_found_index = CallFunc_find_visible_list_found_index;
	Parms.CallFunc_find_visible_list_found_widget = CallFunc_find_visible_list_found_widget;
	Parms.CallFunc_find_visible_list_is_visible = CallFunc_find_visible_list_is_visible;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Max_ReturnValue_2 = CallFunc_Max_ReturnValue_2;
	Parms.K2Node_CustomEvent_choice_info = K2Node_CustomEvent_choice_info;
	Parms.K2Node_CustomEvent_widget_info = K2Node_CustomEvent_widget_info;
	Parms.K2Node_CustomEvent_last_index = K2Node_CustomEvent_last_index;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_CustomEvent_choice_Id = K2Node_CustomEvent_choice_Id;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_find_choice_by_id_is_valid = CallFunc_find_choice_by_id_is_valid;
	Parms.CallFunc_find_choice_by_id_choice_index = CallFunc_find_choice_by_id_choice_index;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_find_visible_list_is_valid_1 = CallFunc_find_visible_list_is_valid_1;
	Parms.CallFunc_find_visible_list_found_index_1 = CallFunc_find_visible_list_found_index_1;
	Parms.CallFunc_find_visible_list_found_widget_1 = CallFunc_find_visible_list_found_widget_1;
	Parms.CallFunc_find_visible_list_is_visible_1 = CallFunc_find_visible_list_is_visible_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_find_visible_list_is_valid_2 = CallFunc_find_visible_list_is_valid_2;
	Parms.CallFunc_find_visible_list_found_index_2 = CallFunc_find_visible_list_found_index_2;
	Parms.CallFunc_find_visible_list_found_widget_2 = CallFunc_find_visible_list_found_widget_2;
	Parms.CallFunc_find_visible_list_is_visible_2 = CallFunc_find_visible_list_is_visible_2;
	Parms.CallFunc_get_subtitle_widget_is_valid = CallFunc_get_subtitle_widget_is_valid;
	Parms.CallFunc_get_subtitle_widget_subtitles_widget = CallFunc_get_subtitle_widget_subtitles_widget;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_find_visible_list_is_valid_3 = CallFunc_find_visible_list_is_valid_3;
	Parms.CallFunc_find_visible_list_found_index_3 = CallFunc_find_visible_list_found_index_3;
	Parms.CallFunc_find_visible_list_found_widget_3 = CallFunc_find_visible_list_found_widget_3;
	Parms.CallFunc_find_visible_list_is_visible_3 = CallFunc_find_visible_list_is_visible_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_find_visible_list_is_valid_4 = CallFunc_find_visible_list_is_valid_4;
	Parms.CallFunc_find_visible_list_found_index_4 = CallFunc_find_visible_list_found_index_4;
	Parms.CallFunc_find_visible_list_found_widget_4 = CallFunc_find_visible_list_found_widget_4;
	Parms.CallFunc_find_visible_list_is_visible_4 = CallFunc_find_visible_list_is_visible_4;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue_2 = CallFunc_Array_LastIndex_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_2 = CallFunc_SelectInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_LastIndex_ReturnValue_3 = CallFunc_Array_LastIndex_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_find_visible_list_is_valid_5 = CallFunc_find_visible_list_is_valid_5;
	Parms.CallFunc_find_visible_list_found_index_5 = CallFunc_find_visible_list_found_index_5;
	Parms.CallFunc_find_visible_list_found_widget_5 = CallFunc_find_visible_list_found_widget_5;
	Parms.CallFunc_find_visible_list_is_visible_5 = CallFunc_find_visible_list_is_visible_5;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_get_choice_by_id_is_valid = CallFunc_get_choice_by_id_is_valid;
	Parms.CallFunc_get_choice_by_id_branch_index = CallFunc_get_choice_by_id_branch_index;
	Parms.CallFunc_get_choice_by_id_choice_index = CallFunc_get_choice_by_id_choice_index;
	Parms.CallFunc_get_choice_by_id_choice_data = CallFunc_get_choice_by_id_choice_data;
	Parms.CallFunc_get_choice_by_id_choice_info = CallFunc_get_choice_by_id_choice_info;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_6 = CallFunc_Subtract_IntInt_ReturnValue_6;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3 = CallFunc_GreaterEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_4 = CallFunc_GreaterEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


