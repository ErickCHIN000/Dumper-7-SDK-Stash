#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DialogueBlueprintGeneratedClass Dialogue_Trader.Dialogue_Trader_C
// (None)

class UClass* UDialogue_Trader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dialogue_Trader_C");

	return Clss;
}


// Dialogue_Trader_C Dialogue_Trader.Default__Dialogue_Trader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDialogue_Trader_C* UDialogue_Trader_C::GetDefaultObj()
{
	static class UDialogue_Trader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogue_Trader_C*>(UDialogue_Trader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dialogue_Trader.Dialogue_Trader_C.ExecuteUbergraph_Dialogue_Trader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDialogue_Trader_C::ExecuteUbergraph_Dialogue_Trader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dialogue_Trader_C", "ExecuteUbergraph_Dialogue_Trader");

	Params::UDialogue_Trader_C_ExecuteUbergraph_Dialogue_Trader_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


