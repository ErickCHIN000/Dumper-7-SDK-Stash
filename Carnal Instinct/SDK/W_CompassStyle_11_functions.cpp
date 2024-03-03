#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CompassStyle_11.W_CompassStyle_11_C
// (None)

class UClass* UW_CompassStyle_11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CompassStyle_11_C");

	return Clss;
}


// W_CompassStyle_11_C W_CompassStyle_11.Default__W_CompassStyle_11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CompassStyle_11_C* UW_CompassStyle_11_C::GetDefaultObj()
{
	static class UW_CompassStyle_11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CompassStyle_11_C*>(UW_CompassStyle_11_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CompassStyle_11.W_CompassStyle_11_C.Set Location Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      New_Text                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_CompassStyle_11_C::Set_Location_Text(const class FString& New_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CompassStyle_11_C", "Set Location Text");

	Params::UW_CompassStyle_11_C_Set_Location_Text_Params Parms{};

	Parms.New_Text = New_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CompassStyle_11.W_CompassStyle_11_C.Reset Location Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_CompassStyle_11_C::Reset_Location_Text()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CompassStyle_11_C", "Reset Location Text");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CompassStyle_11.W_CompassStyle_11_C.ExecuteUbergraph_W_CompassStyle_11
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_New_Text                                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_CompassStyle_11_C::ExecuteUbergraph_W_CompassStyle_11(int32 EntryPoint, const class FString& K2Node_CustomEvent_New_Text, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CompassStyle_11_C", "ExecuteUbergraph_W_CompassStyle_11");

	Params::UW_CompassStyle_11_C_ExecuteUbergraph_W_CompassStyle_11_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_New_Text = K2Node_CustomEvent_New_Text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


