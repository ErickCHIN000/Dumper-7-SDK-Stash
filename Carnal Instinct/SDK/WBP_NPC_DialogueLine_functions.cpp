#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NPC_DialogueLine.WBP_NPC_DialogueLine_C
// (None)

class UClass* UWBP_NPC_DialogueLine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NPC_DialogueLine_C");

	return Clss;
}


// WBP_NPC_DialogueLine_C WBP_NPC_DialogueLine.Default__WBP_NPC_DialogueLine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NPC_DialogueLine_C* UWBP_NPC_DialogueLine_C::GetDefaultObj()
{
	static class UWBP_NPC_DialogueLine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NPC_DialogueLine_C*>(UWBP_NPC_DialogueLine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NPC_DialogueLine.WBP_NPC_DialogueLine_C.fnSetLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NPC_Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FStruct_DT_NPC_Dialogue     New_Line                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class Enum_NPC_Dialogue_State Line_State                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_Dialogue_State State                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DT_NPC_Dialogue     Line                                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FText                        Name                                                             (Edit, BlueprintVisible)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_NPC_DialogueLine_C::FnSetLine(class FText NPC_Name, const struct FStruct_DT_NPC_Dialogue& New_Line, enum class Enum_NPC_Dialogue_State Line_State, enum class Enum_NPC_Dialogue_State State, const struct FStruct_DT_NPC_Dialogue& Line, class FText Name, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_DialogueLine_C", "fnSetLine");

	Params::UWBP_NPC_DialogueLine_C_FnSetLine_Params Parms{};

	Parms.NPC_Name = NPC_Name;
	Parms.New_Line = New_Line;
	Parms.Line_State = Line_State;
	Parms.State = State;
	Parms.Line = Line;
	Parms.Name = Name;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_DialogueLine.WBP_NPC_DialogueLine_C.ExecuteUbergraph_WBP_NPC_DialogueLine
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_DialogueLine_C::ExecuteUbergraph_WBP_NPC_DialogueLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_DialogueLine_C", "ExecuteUbergraph_WBP_NPC_DialogueLine");

	Params::UWBP_NPC_DialogueLine_C_ExecuteUbergraph_WBP_NPC_DialogueLine_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


