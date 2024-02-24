#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ActivityLogMessage.WBP_ActivityLogMessage_C
// (None)

class UClass* UWBP_ActivityLogMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ActivityLogMessage_C");

	return Clss;
}


// WBP_ActivityLogMessage_C WBP_ActivityLogMessage.Default__WBP_ActivityLogMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ActivityLogMessage_C* UWBP_ActivityLogMessage_C::GetDefaultObj()
{
	static class UWBP_ActivityLogMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ActivityLogMessage_C*>(UWBP_ActivityLogMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ActivityLogMessage.WBP_ActivityLogMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ActivityLogMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActivityLogMessage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ActivityLogMessage.WBP_ActivityLogMessage_C.ExecuteUbergraph_WBP_ActivityLogMessage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ActivityLogMessage_C::ExecuteUbergraph_WBP_ActivityLogMessage(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActivityLogMessage_C", "ExecuteUbergraph_WBP_ActivityLogMessage");

	Params::UWBP_ActivityLogMessage_C_ExecuteUbergraph_WBP_ActivityLogMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


