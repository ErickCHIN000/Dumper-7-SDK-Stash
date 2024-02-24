#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_OperableTerminalInstructions.W_OperableTerminalInstructions_C
// (None)

class UClass* UW_OperableTerminalInstructions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_OperableTerminalInstructions_C");

	return Clss;
}


// W_OperableTerminalInstructions_C W_OperableTerminalInstructions.Default__W_OperableTerminalInstructions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_OperableTerminalInstructions_C* UW_OperableTerminalInstructions_C::GetDefaultObj()
{
	static class UW_OperableTerminalInstructions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_OperableTerminalInstructions_C*>(UW_OperableTerminalInstructions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_OperableTerminalInstructions.W_OperableTerminalInstructions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_OperableTerminalInstructions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OperableTerminalInstructions_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OperableTerminalInstructions.W_OperableTerminalInstructions_C.ExecuteUbergraph_W_OperableTerminalInstructions
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OperableTerminalInstructions_C::ExecuteUbergraph_W_OperableTerminalInstructions(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OperableTerminalInstructions_C", "ExecuteUbergraph_W_OperableTerminalInstructions");

	Params::UW_OperableTerminalInstructions_C_ExecuteUbergraph_W_OperableTerminalInstructions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


