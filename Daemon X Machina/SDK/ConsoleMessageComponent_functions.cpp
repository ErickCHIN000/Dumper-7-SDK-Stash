#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ConsoleMessageComponent.ConsoleMessageComponent_C
// (None)

class UClass* UConsoleMessageComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConsoleMessageComponent_C");

	return Clss;
}


// ConsoleMessageComponent_C ConsoleMessageComponent.Default__ConsoleMessageComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConsoleMessageComponent_C* UConsoleMessageComponent_C::GetDefaultObj()
{
	static class UConsoleMessageComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConsoleMessageComponent_C*>(UConsoleMessageComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ConsoleMessageComponent.ConsoleMessageComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UConsoleMessageComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleMessageComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConsoleMessageComponent.ConsoleMessageComponent_C.ExecuteUbergraph_ConsoleMessageComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDem_talk_top06_C*           K2Node_DynamicCast_AsDem_Talk_Top_06                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UConsoleMessageComponent_C::ExecuteUbergraph_ConsoleMessageComponent(int32 EntryPoint, class UUserWidget* CallFunc_Create_ReturnValue, class UDem_talk_top06_C* K2Node_DynamicCast_AsDem_Talk_Top_06, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleMessageComponent_C", "ExecuteUbergraph_ConsoleMessageComponent");

	Params::UConsoleMessageComponent_C_ExecuteUbergraph_ConsoleMessageComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsDem_Talk_Top_06 = K2Node_DynamicCast_AsDem_Talk_Top_06;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


