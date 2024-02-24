#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_SetFloat.BTT_SetFloat_C
// (None)

class UClass* UBTT_SetFloat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_SetFloat_C");

	return Clss;
}


// BTT_SetFloat_C BTT_SetFloat.Default__BTT_SetFloat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_SetFloat_C* UBTT_SetFloat_C::GetDefaultObj()
{
	static class UBTT_SetFloat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_SetFloat_C*>(UBTT_SetFloat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_SetFloat.BTT_SetFloat_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetFloat_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetFloat_C", "ReceiveExecute");

	Params::UBTT_SetFloat_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_SetFloat.BTT_SetFloat_C.ExecuteUbergraph_BTT_SetFloat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetFloat_C::ExecuteUbergraph_BTT_SetFloat(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetFloat_C", "ExecuteUbergraph_BTT_SetFloat");

	Params::UBTT_SetFloat_C_ExecuteUbergraph_BTT_SetFloat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


