#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DialogueBlueprintGeneratedClass Dialogue_MilitaryVendor.Dialogue_MilitaryVendor_C
// (None)

class UClass* UDialogue_MilitaryVendor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dialogue_MilitaryVendor_C");

	return Clss;
}


// Dialogue_MilitaryVendor_C Dialogue_MilitaryVendor.Default__Dialogue_MilitaryVendor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDialogue_MilitaryVendor_C* UDialogue_MilitaryVendor_C::GetDefaultObj()
{
	static class UDialogue_MilitaryVendor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogue_MilitaryVendor_C*>(UDialogue_MilitaryVendor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dialogue_MilitaryVendor.Dialogue_MilitaryVendor_C.ExecuteUbergraph_Dialogue_MilitaryVendor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDialogue_MilitaryVendor_C::ExecuteUbergraph_Dialogue_MilitaryVendor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue_MilitaryVendor_C", "ExecuteUbergraph_Dialogue_MilitaryVendor");

	Params::UDialogue_MilitaryVendor_C_ExecuteUbergraph_Dialogue_MilitaryVendor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


