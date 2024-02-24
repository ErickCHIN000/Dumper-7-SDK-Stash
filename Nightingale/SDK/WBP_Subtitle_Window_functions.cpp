#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Subtitle_Window.WBP_Subtitle_Window_C
// (None)

class UClass* UWBP_Subtitle_Window_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Subtitle_Window_C");

	return Clss;
}


// WBP_Subtitle_Window_C WBP_Subtitle_Window.Default__WBP_Subtitle_Window_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Subtitle_Window_C* UWBP_Subtitle_Window_C::GetDefaultObj()
{
	static class UWBP_Subtitle_Window_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Subtitle_Window_C*>(UWBP_Subtitle_Window_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Subtitle_Window.WBP_Subtitle_Window_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Subtitle_Window_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Subtitle_Window_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Subtitle_Window.WBP_Subtitle_Window_C.ExecuteUbergraph_WBP_Subtitle_Window
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Subtitle_Window_C::ExecuteUbergraph_WBP_Subtitle_Window(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Subtitle_Window_C", "ExecuteUbergraph_WBP_Subtitle_Window");

	Params::UWBP_Subtitle_Window_C_ExecuteUbergraph_WBP_Subtitle_Window_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


