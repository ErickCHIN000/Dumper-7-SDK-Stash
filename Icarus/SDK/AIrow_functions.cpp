#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AIrow.AIRow_C
// (None)

class UClass* UAIRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIRow_C");

	return Clss;
}


// AIRow_C AIrow.Default__AIRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIRow_C* UAIRow_C::GetDefaultObj()
{
	static class UAIRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIRow_C*>(UAIRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIrow.AIRow_C.AddAI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAIRow_C::AddAI(class FText RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIRow_C", "AddAI");

	Params::UAIRow_C_AddAI_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIrow.AIRow_C.ExecuteUbergraph_AIRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_RowName                                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           CallFunc_MakeAISetup_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UAIRow_C::ExecuteUbergraph_AIRow(int32 EntryPoint, class FText K2Node_CustomEvent_RowName, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FAISetupRowHandle& CallFunc_MakeAISetup_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIRow_C", "ExecuteUbergraph_AIRow");

	Params::UAIRow_C_ExecuteUbergraph_AIRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RowName = K2Node_CustomEvent_RowName;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeAISetup_ReturnValue = CallFunc_MakeAISetup_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


