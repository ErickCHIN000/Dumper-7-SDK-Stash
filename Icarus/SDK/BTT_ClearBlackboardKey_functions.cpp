#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_ClearBlackboardKey.BTT_ClearBlackboardKey_C
// (None)

class UClass* UBTT_ClearBlackboardKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_ClearBlackboardKey_C");

	return Clss;
}


// BTT_ClearBlackboardKey_C BTT_ClearBlackboardKey.Default__BTT_ClearBlackboardKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_ClearBlackboardKey_C* UBTT_ClearBlackboardKey_C::GetDefaultObj()
{
	static class UBTT_ClearBlackboardKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_ClearBlackboardKey_C*>(UBTT_ClearBlackboardKey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_ClearBlackboardKey.BTT_ClearBlackboardKey_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ClearBlackboardKey_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_ClearBlackboardKey_C", "ReceiveExecute");

	Params::UBTT_ClearBlackboardKey_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_ClearBlackboardKey.BTT_ClearBlackboardKey_C.ExecuteUbergraph_BTT_ClearBlackboardKey
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ClearBlackboardKey_C::ExecuteUbergraph_BTT_ClearBlackboardKey(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_ClearBlackboardKey_C", "ExecuteUbergraph_BTT_ClearBlackboardKey");

	Params::UBTT_ClearBlackboardKey_C_ExecuteUbergraph_BTT_ClearBlackboardKey_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


