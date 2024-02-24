#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PartyJoinMessage.WBP_PartyJoinMessage_C
// (None)

class UClass* UWBP_PartyJoinMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PartyJoinMessage_C");

	return Clss;
}


// WBP_PartyJoinMessage_C WBP_PartyJoinMessage.Default__WBP_PartyJoinMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PartyJoinMessage_C* UWBP_PartyJoinMessage_C::GetDefaultObj()
{
	static class UWBP_PartyJoinMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PartyJoinMessage_C*>(UWBP_PartyJoinMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PartyJoinMessage.WBP_PartyJoinMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PartyJoinMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyJoinMessage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyJoinMessage.WBP_PartyJoinMessage_C.ExecuteUbergraph_WBP_PartyJoinMessage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyJoinMessage_C::ExecuteUbergraph_WBP_PartyJoinMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyJoinMessage_C", "ExecuteUbergraph_WBP_PartyJoinMessage");

	Params::UWBP_PartyJoinMessage_C_ExecuteUbergraph_WBP_PartyJoinMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


