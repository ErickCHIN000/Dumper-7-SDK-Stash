#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DifficultySettingsPage.DifficultySettingsPage_C
// (None)

class UClass* UDifficultySettingsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DifficultySettingsPage_C");

	return Clss;
}


// DifficultySettingsPage_C DifficultySettingsPage.Default__DifficultySettingsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDifficultySettingsPage_C* UDifficultySettingsPage_C::GetDefaultObj()
{
	static class UDifficultySettingsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDifficultySettingsPage_C*>(UDifficultySettingsPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DifficultySettingsPage.DifficultySettingsPage_C.CategoryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UDifficultySettingsPage_C::CategoryChanged(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DifficultySettingsPage_C", "CategoryChanged");

	Params::UDifficultySettingsPage_C_CategoryChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DifficultySettingsPage.DifficultySettingsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDifficultySettingsPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DifficultySettingsPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DifficultySettingsPage.DifficultySettingsPage_C.ExecuteUbergraph_DifficultySettingsPage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Value                                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDifficultySettingsPage_C::ExecuteUbergraph_DifficultySettingsPage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_Value, int32 CallFunc_Conv_StringToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DifficultySettingsPage_C", "ExecuteUbergraph_DifficultySettingsPage");

	Params::UDifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


