#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Message.WBP_Message_C
// (None)

class UClass* UWBP_Message_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Message_C");

	return Clss;
}


// WBP_Message_C WBP_Message.Default__WBP_Message_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Message_C* UWBP_Message_C::GetDefaultObj()
{
	static class UWBP_Message_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Message_C*>(UWBP_Message_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Message.WBP_Message_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Message_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Message_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Message.WBP_Message_C.ExecuteUbergraph_WBP_Message
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Message_C::ExecuteUbergraph_WBP_Message(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Message_C", "ExecuteUbergraph_WBP_Message");

	Params::UWBP_Message_C_ExecuteUbergraph_WBP_Message_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


