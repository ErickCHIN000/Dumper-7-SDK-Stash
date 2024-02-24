#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_Stat.BP_Stat_C
// (None)

class UClass* UBP_Stat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Stat_C");

	return Clss;
}


// BP_Stat_C BP_Stat.Default__BP_Stat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Stat_C* UBP_Stat_C::GetDefaultObj()
{
	static class UBP_Stat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Stat_C*>(UBP_Stat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Stat.BP_Stat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_Stat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Stat_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Stat.BP_Stat_C.ExecuteUbergraph_BP_Stat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)

void UBP_Stat_C::ExecuteUbergraph_BP_Stat(int32 EntryPoint, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Stat_C", "ExecuteUbergraph_BP_Stat");

	Params::UBP_Stat_C_ExecuteUbergraph_BP_Stat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


