#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BT_Fail.BT_Fail_C
// (None)

class UClass* UBT_Fail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BT_Fail_C");

	return Clss;
}


// BT_Fail_C BT_Fail.Default__BT_Fail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBT_Fail_C* UBT_Fail_C::GetDefaultObj()
{
	static class UBT_Fail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBT_Fail_C*>(UBT_Fail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BT_Fail.BT_Fail_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBT_Fail_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BT_Fail_C", "ReceiveExecute");

	Params::UBT_Fail_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BT_Fail.BT_Fail_C.ExecuteUbergraph_BT_Fail
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBT_Fail_C::ExecuteUbergraph_BT_Fail(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BT_Fail_C", "ExecuteUbergraph_BT_Fail");

	Params::UBT_Fail_C_ExecuteUbergraph_BT_Fail_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


