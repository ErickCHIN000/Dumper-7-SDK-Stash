#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FlammableComponentClassRow.FlammableComponentClassRow_C
// (None)

class UClass* UFlammableComponentClassRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlammableComponentClassRow_C");

	return Clss;
}


// FlammableComponentClassRow_C FlammableComponentClassRow.Default__FlammableComponentClassRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlammableComponentClassRow_C* UFlammableComponentClassRow_C::GetDefaultObj()
{
	static class UFlammableComponentClassRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlammableComponentClassRow_C*>(UFlammableComponentClassRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FlammableComponentClassRow.FlammableComponentClassRow_C.SetClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      FlammableClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlammableComponentClassRow_C::SetClass(class UClass* FlammableClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlammableComponentClassRow_C", "SetClass");

	Params::UFlammableComponentClassRow_C_SetClass_Params Parms{};

	Parms.FlammableClass = FlammableClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlammableComponentClassRow.FlammableComponentClassRow_C.ExecuteUbergraph_FlammableComponentClassRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_FlammableClass                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UFlammableComponentClassRow_C::ExecuteUbergraph_FlammableComponentClassRow(int32 EntryPoint, class UClass* K2Node_CustomEvent_FlammableClass, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlammableComponentClassRow_C", "ExecuteUbergraph_FlammableComponentClassRow");

	Params::UFlammableComponentClassRow_C_ExecuteUbergraph_FlammableComponentClassRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_FlammableClass = K2Node_CustomEvent_FlammableClass;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


