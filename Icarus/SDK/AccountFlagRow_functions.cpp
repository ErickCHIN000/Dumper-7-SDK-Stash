#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AccountFlagRow.AccountFlagRow_C
// (None)

class UClass* UAccountFlagRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AccountFlagRow_C");

	return Clss;
}


// AccountFlagRow_C AccountFlagRow.Default__AccountFlagRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAccountFlagRow_C* UAccountFlagRow_C::GetDefaultObj()
{
	static class UAccountFlagRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAccountFlagRow_C*>(UAccountFlagRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AccountFlagRow.AccountFlagRow_C.SetAccountFlagRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccountFlagsRowHandle      AccountFlag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UAccountFlagRow_C::SetAccountFlagRow(const struct FAccountFlagsRowHandle& AccountFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountFlagRow_C", "SetAccountFlagRow");

	Params::UAccountFlagRow_C_SetAccountFlagRow_Params Parms{};

	Parms.AccountFlag = AccountFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountFlagRow.AccountFlagRow_C.ExecuteUbergraph_AccountFlagRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccountFlagsRowHandle      K2Node_CustomEvent_AccountFlag                                   (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UAccountFlagRow_C::ExecuteUbergraph_AccountFlagRow(int32 EntryPoint, const struct FAccountFlagsRowHandle& K2Node_CustomEvent_AccountFlag, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AccountFlagRow_C", "ExecuteUbergraph_AccountFlagRow");

	Params::UAccountFlagRow_C_ExecuteUbergraph_AccountFlagRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AccountFlag = K2Node_CustomEvent_AccountFlag;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


