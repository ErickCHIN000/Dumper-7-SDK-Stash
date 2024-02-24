#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_sw_LevelLoading.wid_sw_LevelLoading_C
// (None)

class UClass* UWid_sw_LevelLoading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_sw_LevelLoading_C");

	return Clss;
}


// wid_sw_LevelLoading_C wid_sw_LevelLoading.Default__wid_sw_LevelLoading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_sw_LevelLoading_C* UWid_sw_LevelLoading_C::GetDefaultObj()
{
	static class UWid_sw_LevelLoading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_sw_LevelLoading_C*>(UWid_sw_LevelLoading_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_sw_LevelLoading.wid_sw_LevelLoading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_sw_LevelLoading_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_LevelLoading_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_LevelLoading.wid_sw_LevelLoading_C.ExecuteUbergraph_wid_sw_LevelLoading
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_LevelLoading_C::ExecuteUbergraph_wid_sw_LevelLoading(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_LevelLoading_C", "ExecuteUbergraph_wid_sw_LevelLoading");

	Params::UWid_sw_LevelLoading_C_ExecuteUbergraph_wid_sw_LevelLoading_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


