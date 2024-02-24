#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_Fail.BTT_Fail_C
// (None)

class UClass* UBTT_Fail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_Fail_C");

	return Clss;
}


// BTT_Fail_C BTT_Fail.Default__BTT_Fail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_Fail_C* UBTT_Fail_C::GetDefaultObj()
{
	static class UBTT_Fail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_Fail_C*>(UBTT_Fail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_Fail.BTT_Fail_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_Fail_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_Fail_C", "ReceiveExecute");

	Params::UBTT_Fail_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_Fail.BTT_Fail_C.ExecuteUbergraph_BTT_Fail
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_Fail_C::ExecuteUbergraph_BTT_Fail(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_Fail_C", "ExecuteUbergraph_BTT_Fail");

	Params::UBTT_Fail_C_ExecuteUbergraph_BTT_Fail_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


