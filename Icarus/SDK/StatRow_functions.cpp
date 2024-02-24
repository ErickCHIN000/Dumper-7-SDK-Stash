#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StatRow.StatRow_C
// (None)

class UClass* UStatRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatRow_C");

	return Clss;
}


// StatRow_C StatRow.Default__StatRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatRow_C* UStatRow_C::GetDefaultObj()
{
	static class UStatRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatRow_C*>(UStatRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatRow.StatRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStatRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatRow.StatRow_C.ExecuteUbergraph_StatRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakStatsEnum_Name                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakStatsEnum_Index                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UStatRow_C::ExecuteUbergraph_StatRow(int32 EntryPoint, class FName CallFunc_BreakStatsEnum_Name, int32 CallFunc_BreakStatsEnum_Index, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatRow_C", "ExecuteUbergraph_StatRow");

	Params::UStatRow_C_ExecuteUbergraph_StatRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BreakStatsEnum_Name = CallFunc_BreakStatsEnum_Name;
	Parms.CallFunc_BreakStatsEnum_Index = CallFunc_BreakStatsEnum_Index;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


