#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PrimaryGameLayout.WBP_PrimaryGameLayout_C
// (None)

class UClass* UWBP_PrimaryGameLayout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PrimaryGameLayout_C");

	return Clss;
}


// WBP_PrimaryGameLayout_C WBP_PrimaryGameLayout.Default__WBP_PrimaryGameLayout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PrimaryGameLayout_C* UWBP_PrimaryGameLayout_C::GetDefaultObj()
{
	static class UWBP_PrimaryGameLayout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PrimaryGameLayout_C*>(UWBP_PrimaryGameLayout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PrimaryGameLayout.WBP_PrimaryGameLayout_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PrimaryGameLayout_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PrimaryGameLayout_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PrimaryGameLayout.WBP_PrimaryGameLayout_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PrimaryGameLayout_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PrimaryGameLayout_C", "Tick");

	Params::UWBP_PrimaryGameLayout_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PrimaryGameLayout.WBP_PrimaryGameLayout_C.ExecuteUbergraph_WBP_PrimaryGameLayout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PrimaryGameLayout_C::ExecuteUbergraph_WBP_PrimaryGameLayout(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PrimaryGameLayout_C", "ExecuteUbergraph_WBP_PrimaryGameLayout");

	Params::UWBP_PrimaryGameLayout_C_ExecuteUbergraph_WBP_PrimaryGameLayout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


