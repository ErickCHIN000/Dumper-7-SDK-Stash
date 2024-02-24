#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ResourceRow.ResourceRow_C
// (None)

class UClass* UResourceRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResourceRow_C");

	return Clss;
}


// ResourceRow_C ResourceRow.Default__ResourceRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResourceRow_C* UResourceRow_C::GetDefaultObj()
{
	static class UResourceRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResourceRow_C*>(UResourceRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResourceRow.ResourceRow_C.SetResource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EIcarusResourceType     ResourceType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResourceRow_C::SetResource(enum class EIcarusResourceType ResourceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceRow_C", "SetResource");

	Params::UResourceRow_C_SetResource_Params Parms{};

	Parms.ResourceType = ResourceType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResourceRow.ResourceRow_C.ExecuteUbergraph_ResourceRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusResourceType     K2Node_CustomEvent_ResourceType                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetEnumeratorName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UResourceRow_C::ExecuteUbergraph_ResourceRow(int32 EntryPoint, enum class EIcarusResourceType K2Node_CustomEvent_ResourceType, class FName CallFunc_GetEnumeratorName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceRow_C", "ExecuteUbergraph_ResourceRow");

	Params::UResourceRow_C_ExecuteUbergraph_ResourceRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ResourceType = K2Node_CustomEvent_ResourceType;
	Parms.CallFunc_GetEnumeratorName_ReturnValue = CallFunc_GetEnumeratorName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


