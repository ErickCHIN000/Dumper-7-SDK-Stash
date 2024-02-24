#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProspectForecastRow.ProspectForecastRow_C
// (None)

class UClass* UProspectForecastRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProspectForecastRow_C");

	return Clss;
}


// ProspectForecastRow_C ProspectForecastRow.Default__ProspectForecastRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProspectForecastRow_C* UProspectForecastRow_C::GetDefaultObj()
{
	static class UProspectForecastRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProspectForecastRow_C*>(UProspectForecastRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ProspectForecastRow.ProspectForecastRow_C.SetProspectForecast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProspectForecastEnum       NewProspectForecast                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UProspectForecastRow_C::SetProspectForecast(const struct FProspectForecastEnum& NewProspectForecast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProspectForecastRow_C", "SetProspectForecast");

	Params::UProspectForecastRow_C_SetProspectForecast_Params Parms{};

	Parms.NewProspectForecast = NewProspectForecast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProspectForecastRow.ProspectForecastRow_C.ExecuteUbergraph_ProspectForecastRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectForecastEnum       K2Node_CustomEvent_NewProspectForecast                           (HasGetValueTypeHash)
// class FName                        CallFunc_BreakProspectForecastEnum_Name                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakProspectForecastEnum_Index                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UProspectForecastRow_C::ExecuteUbergraph_ProspectForecastRow(int32 EntryPoint, const struct FProspectForecastEnum& K2Node_CustomEvent_NewProspectForecast, class FName CallFunc_BreakProspectForecastEnum_Name, int32 CallFunc_BreakProspectForecastEnum_Index, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProspectForecastRow_C", "ExecuteUbergraph_ProspectForecastRow");

	Params::UProspectForecastRow_C_ExecuteUbergraph_ProspectForecastRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewProspectForecast = K2Node_CustomEvent_NewProspectForecast;
	Parms.CallFunc_BreakProspectForecastEnum_Name = CallFunc_BreakProspectForecastEnum_Name;
	Parms.CallFunc_BreakProspectForecastEnum_Index = CallFunc_BreakProspectForecastEnum_Index;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


