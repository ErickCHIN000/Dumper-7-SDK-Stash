#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DialogueCFRow.DialogueCFRow_C
// (None)

class UClass* UDialogueCFRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogueCFRow_C");

	return Clss;
}


// DialogueCFRow_C DialogueCFRow.Default__DialogueCFRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDialogueCFRow_C* UDialogueCFRow_C::GetDefaultObj()
{
	static class UDialogueCFRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogueCFRow_C*>(UDialogueCFRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DialogueCFRow.DialogueCFRow_C.LessThan
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Other                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UDialogueCFRow_C*            K2Node_DynamicCast_AsDialogue_CFRow                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LexicalLess_Name_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDialogueCFRow_C::LessThan(class UObject* Other, class UDialogueCFRow_C* K2Node_DynamicCast_AsDialogue_CFRow, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueCFRow_C", "LessThan");

	Params::UDialogueCFRow_C_LessThan_Params Parms{};

	Parms.Other = Other;
	Parms.K2Node_DynamicCast_AsDialogue_CFRow = K2Node_DynamicCast_AsDialogue_CFRow;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LexicalLess_Name_ReturnValue = CallFunc_LexicalLess_Name_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DialogueCFRow.DialogueCFRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDialogueCFRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueCFRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DialogueCFRow.DialogueCFRow_C.ExecuteUbergraph_DialogueCFRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UDialogueCFRow_C::ExecuteUbergraph_DialogueCFRow(int32 EntryPoint, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogueCFRow_C", "ExecuteUbergraph_DialogueCFRow");

	Params::UDialogueCFRow_C_ExecuteUbergraph_DialogueCFRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


