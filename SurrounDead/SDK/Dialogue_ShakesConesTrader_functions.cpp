#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DialogueBlueprintGeneratedClass Dialogue_ShakesConesTrader.Dialogue_ShakesConesTrader_C
// (None)

class UClass* UDialogue_ShakesConesTrader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dialogue_ShakesConesTrader_C");

	return Clss;
}


// Dialogue_ShakesConesTrader_C Dialogue_ShakesConesTrader.Default__Dialogue_ShakesConesTrader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDialogue_ShakesConesTrader_C* UDialogue_ShakesConesTrader_C::GetDefaultObj()
{
	static class UDialogue_ShakesConesTrader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogue_ShakesConesTrader_C*>(UDialogue_ShakesConesTrader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dialogue_ShakesConesTrader.Dialogue_ShakesConesTrader_C.ExecuteUbergraph_Dialogue_ShakesConesTrader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDialogue_ShakesConesTrader_C::ExecuteUbergraph_Dialogue_ShakesConesTrader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue_ShakesConesTrader_C", "ExecuteUbergraph_Dialogue_ShakesConesTrader");

	Params::UDialogue_ShakesConesTrader_C_ExecuteUbergraph_Dialogue_ShakesConesTrader_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


