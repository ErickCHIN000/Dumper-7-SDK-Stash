#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C
// (Actor)

class UClass* ABP_DropShipConnectionPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DropShipConnectionPoint_C");

	return Clss;
}


// BP_DropShipConnectionPoint_C BP_DropShipConnectionPoint.Default__BP_DropShipConnectionPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DropShipConnectionPoint_C* ABP_DropShipConnectionPoint_C::GetDefaultObj()
{
	static class ABP_DropShipConnectionPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DropShipConnectionPoint_C*>(ABP_DropShipConnectionPoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DropShipConnectionPoint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DropShipConnectionPoint_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C.OnConnectionUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DropShipConnectionPoint_C::OnConnectionUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DropShipConnectionPoint_C", "OnConnectionUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C.ExecuteUbergraph_BP_DropShipConnectionPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsConnected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DropShipConnectionPoint_C::ExecuteUbergraph_BP_DropShipConnectionPoint(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsConnected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DropShipConnectionPoint_C", "ExecuteUbergraph_BP_DropShipConnectionPoint");

	Params::ABP_DropShipConnectionPoint_C_ExecuteUbergraph_BP_DropShipConnectionPoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsConnected_ReturnValue = CallFunc_IsConnected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


