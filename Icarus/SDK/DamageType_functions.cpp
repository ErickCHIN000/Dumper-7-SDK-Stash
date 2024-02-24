#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DamageType.DamageType_C
// (None)

class UClass* UDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageType_C");

	return Clss;
}


// DamageType_C DamageType.Default__DamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageType_C* UDamageType_C::GetDefaultObj()
{
	static class UDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageType_C*>(UDamageType_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageType.DamageType_C.SetDamageType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EIcarusDamageType       NewDamageType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageType_C::SetDamageType(enum class EIcarusDamageType NewDamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageType_C", "SetDamageType");

	Params::UDamageType_C_SetDamageType_Params Parms{};

	Parms.NewDamageType = NewDamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DamageType.DamageType_C.ExecuteUbergraph_DamageType
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusDamageType       K2Node_CustomEvent_NewDamageType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UDamageType_C::ExecuteUbergraph_DamageType(int32 EntryPoint, enum class EIcarusDamageType K2Node_CustomEvent_NewDamageType, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageType_C", "ExecuteUbergraph_DamageType");

	Params::UDamageType_C_ExecuteUbergraph_DamageType_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewDamageType = K2Node_CustomEvent_NewDamageType;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


