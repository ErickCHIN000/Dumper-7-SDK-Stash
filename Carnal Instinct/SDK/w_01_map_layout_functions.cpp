#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_01_map_layout.w_01_map_layout_C
// (None)

class UClass* UW_01_map_layout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_01_map_layout_C");

	return Clss;
}


// w_01_map_layout_C w_01_map_layout.Default__w_01_map_layout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_01_map_layout_C* UW_01_map_layout_C::GetDefaultObj()
{
	static class UW_01_map_layout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_01_map_layout_C*>(UW_01_map_layout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_01_map_layout.w_01_map_layout_C.init_widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_map_layout_C::Init_widget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_map_layout_C", "init_widget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_map_layout.w_01_map_layout_C.ExecuteUbergraph_w_01_map_layout
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_map_layout_C::ExecuteUbergraph_w_01_map_layout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_map_layout_C", "ExecuteUbergraph_w_01_map_layout");

	Params::UW_01_map_layout_C_ExecuteUbergraph_w_01_map_layout_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


