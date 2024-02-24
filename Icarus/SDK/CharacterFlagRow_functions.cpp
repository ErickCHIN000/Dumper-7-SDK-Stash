#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CharacterFlagRow.CharacterFlagRow_C
// (None)

class UClass* UCharacterFlagRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterFlagRow_C");

	return Clss;
}


// CharacterFlagRow_C CharacterFlagRow.Default__CharacterFlagRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterFlagRow_C* UCharacterFlagRow_C::GetDefaultObj()
{
	static class UCharacterFlagRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterFlagRow_C*>(UCharacterFlagRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterFlagRow.CharacterFlagRow_C.SetCharacterFlagRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterFlagsRowHandle    ProspectRowHandle                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UCharacterFlagRow_C::SetCharacterFlagRow(const struct FCharacterFlagsRowHandle& ProspectRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterFlagRow_C", "SetCharacterFlagRow");

	Params::UCharacterFlagRow_C_SetCharacterFlagRow_Params Parms{};

	Parms.ProspectRowHandle = ProspectRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterFlagRow.CharacterFlagRow_C.ExecuteUbergraph_CharacterFlagRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterFlagsRowHandle    K2Node_CustomEvent_ProspectRowHandle                             (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UCharacterFlagRow_C::ExecuteUbergraph_CharacterFlagRow(int32 EntryPoint, const struct FCharacterFlagsRowHandle& K2Node_CustomEvent_ProspectRowHandle, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterFlagRow_C", "ExecuteUbergraph_CharacterFlagRow");

	Params::UCharacterFlagRow_C_ExecuteUbergraph_CharacterFlagRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ProspectRowHandle = K2Node_CustomEvent_ProspectRowHandle;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


