#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Map_Part_Widget.Map_Part_Widget_C
// (None)

class UClass* UMap_Part_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Map_Part_Widget_C");

	return Clss;
}


// Map_Part_Widget_C Map_Part_Widget.Default__Map_Part_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMap_Part_Widget_C* UMap_Part_Widget_C::GetDefaultObj()
{
	static class UMap_Part_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMap_Part_Widget_C*>(UMap_Part_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Map_Part_Widget.Map_Part_Widget_C.Update Brush
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     In_Brush_Image                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMap_Part_Widget_C::Update_Brush(class UObject* In_Brush_Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_Part_Widget_C", "Update Brush");

	Params::UMap_Part_Widget_C_Update_Brush_Params Parms{};

	Parms.In_Brush_Image = In_Brush_Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Map_Part_Widget.Map_Part_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMap_Part_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_Part_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_Part_Widget.Map_Part_Widget_C.ExecuteUbergraph_Map_Part_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class UObject*                     K2Node_CustomEvent_In_Brush_Image                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)

void UMap_Part_Widget_C::ExecuteUbergraph_Map_Part_Widget(int32 EntryPoint, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UObject* K2Node_CustomEvent_In_Brush_Image, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_Part_Widget_C", "ExecuteUbergraph_Map_Part_Widget");

	Params::UMap_Part_Widget_C_ExecuteUbergraph_Map_Part_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_CustomEvent_In_Brush_Image = K2Node_CustomEvent_In_Brush_Image;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


