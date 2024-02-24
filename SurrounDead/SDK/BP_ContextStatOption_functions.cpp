#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ContextStatOption.BP_ContextStatOption_C
// (None)

class UClass* UBP_ContextStatOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ContextStatOption_C");

	return Clss;
}


// BP_ContextStatOption_C BP_ContextStatOption.Default__BP_ContextStatOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ContextStatOption_C* UBP_ContextStatOption_C::GetDefaultObj()
{
	static class UBP_ContextStatOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ContextStatOption_C*>(UBP_ContextStatOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ContextStatOption.BP_ContextStatOption_C.SetContextOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContextStatOption_C::SetContextOption(bool Active_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextStatOption_C", "SetContextOption");

	Params::UBP_ContextStatOption_C_SetContextOption_Params Parms{};

	Parms.Active_ = Active_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContextStatOption.BP_ContextStatOption_C.ExecuteUbergraph_BP_ContextStatOption
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Active_                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContextStatOption_C::ExecuteUbergraph_BP_ContextStatOption(int32 EntryPoint, bool K2Node_CustomEvent_Active_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextStatOption_C", "ExecuteUbergraph_BP_ContextStatOption");

	Params::UBP_ContextStatOption_C_ExecuteUbergraph_BP_ContextStatOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Active_ = K2Node_CustomEvent_Active_;

	UObject::ProcessEvent(Func, &Parms);

}

}


