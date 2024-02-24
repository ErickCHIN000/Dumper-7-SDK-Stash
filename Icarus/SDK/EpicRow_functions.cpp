#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EpicRow.EpicRow_C
// (None)

class UClass* UEpicRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicRow_C");

	return Clss;
}


// EpicRow_C EpicRow.Default__EpicRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEpicRow_C* UEpicRow_C::GetDefaultObj()
{
	static class UEpicRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicRow_C*>(UEpicRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicRow.EpicRow_C.AddAI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UEpicRow_C::AddAI(class FText RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicRow_C", "AddAI");

	Params::UEpicRow_C_AddAI_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EpicRow.EpicRow_C.ExecuteUbergraph_EpicRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_RowName                                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEpicCreaturesRowHandle     CallFunc_MakeEpicCreatures_ReturnValue                           (NoDestructor, HasGetValueTypeHash)

void UEpicRow_C::ExecuteUbergraph_EpicRow(int32 EntryPoint, class FText K2Node_CustomEvent_RowName, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FEpicCreaturesRowHandle& CallFunc_MakeEpicCreatures_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicRow_C", "ExecuteUbergraph_EpicRow");

	Params::UEpicRow_C_ExecuteUbergraph_EpicRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RowName = K2Node_CustomEvent_RowName;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeEpicCreatures_ReturnValue = CallFunc_MakeEpicCreatures_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


