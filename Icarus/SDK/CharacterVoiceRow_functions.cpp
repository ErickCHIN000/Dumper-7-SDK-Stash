#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CharacterVoiceRow.CharacterVoiceRow_C
// (None)

class UClass* UCharacterVoiceRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterVoiceRow_C");

	return Clss;
}


// CharacterVoiceRow_C CharacterVoiceRow.Default__CharacterVoiceRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterVoiceRow_C* UCharacterVoiceRow_C::GetDefaultObj()
{
	static class UCharacterVoiceRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterVoiceRow_C*>(UCharacterVoiceRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterVoiceRow.CharacterVoiceRow_C.LessThan
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Other                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UCharacterVoiceRow_C*        K2Node_DynamicCast_AsCharacter_Voice_Row                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LexicalLess_Name_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCharacterVoiceRow_C::LessThan(class UObject* Other, class UCharacterVoiceRow_C* K2Node_DynamicCast_AsCharacter_Voice_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterVoiceRow_C", "LessThan");

	Params::UCharacterVoiceRow_C_LessThan_Params Parms{};

	Parms.Other = Other;
	Parms.K2Node_DynamicCast_AsCharacter_Voice_Row = K2Node_DynamicCast_AsCharacter_Voice_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LexicalLess_Name_ReturnValue = CallFunc_LexicalLess_Name_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CharacterVoiceRow.CharacterVoiceRow_C.Set Row
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterVoiceRow_C::Set_Row(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterVoiceRow_C", "Set Row");

	Params::UCharacterVoiceRow_C_Set_Row_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterVoiceRow.CharacterVoiceRow_C.ExecuteUbergraph_CharacterVoiceRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FName                        K2Node_CustomEvent_RowName                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterVoicesRowHandle   CallFunc_MakeCharacterVoices_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FCharacterVoiceData         CallFunc_GetCharacterVoicesStruct_CharacterVoices                (None)
// enum class EValid                  CallFunc_GetCharacterVoicesStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterVoiceRow_C::ExecuteUbergraph_CharacterVoiceRow(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, class FName K2Node_CustomEvent_RowName, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FCharacterVoicesRowHandle& CallFunc_MakeCharacterVoices_ReturnValue, const struct FCharacterVoiceData& CallFunc_GetCharacterVoicesStruct_CharacterVoices, enum class EValid CallFunc_GetCharacterVoicesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterVoiceRow_C", "ExecuteUbergraph_CharacterVoiceRow");

	Params::UCharacterVoiceRow_C_ExecuteUbergraph_CharacterVoiceRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_RowName = K2Node_CustomEvent_RowName;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_MakeCharacterVoices_ReturnValue = CallFunc_MakeCharacterVoices_ReturnValue;
	Parms.CallFunc_GetCharacterVoicesStruct_CharacterVoices = CallFunc_GetCharacterVoicesStruct_CharacterVoices;
	Parms.CallFunc_GetCharacterVoicesStruct_Paths = CallFunc_GetCharacterVoicesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


