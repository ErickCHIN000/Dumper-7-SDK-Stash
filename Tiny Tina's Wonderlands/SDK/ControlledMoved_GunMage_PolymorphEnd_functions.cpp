#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ControlledMoved_GunMage_PolymorphEnd.ControlledMoved_GunMage_PolymorphEnd_C
// (None)

class UClass* UControlledMoved_GunMage_PolymorphEnd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlledMoved_GunMage_PolymorphEnd_C");

	return Clss;
}


// ControlledMoved_GunMage_PolymorphEnd_C ControlledMoved_GunMage_PolymorphEnd.Default__ControlledMoved_GunMage_PolymorphEnd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControlledMoved_GunMage_PolymorphEnd_C* UControlledMoved_GunMage_PolymorphEnd_C::GetDefaultObj()
{
	static class UControlledMoved_GunMage_PolymorphEnd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlledMoved_GunMage_PolymorphEnd_C*>(UControlledMoved_GunMage_PolymorphEnd_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlledMoved_GunMage_PolymorphEnd.ControlledMoved_GunMage_PolymorphEnd_C.OnServerStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UControlledMoved_GunMage_PolymorphEnd_C::OnServerStop(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMoved_GunMage_PolymorphEnd_C", "OnServerStop");

	Params::UControlledMoved_GunMage_PolymorphEnd_C_OnServerStop_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlledMoved_GunMage_PolymorphEnd.ControlledMoved_GunMage_PolymorphEnd_C.ExecuteUbergraph_ControlledMoved_GunMage_PolymorphEnd
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UControlledMoved_GunMage_PolymorphEnd_C::ExecuteUbergraph_ControlledMoved_GunMage_PolymorphEnd(int32 EntryPoint, bool K2Node_Event_bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMoved_GunMage_PolymorphEnd_C", "ExecuteUbergraph_ControlledMoved_GunMage_PolymorphEnd");

	Params::UControlledMoved_GunMage_PolymorphEnd_C_ExecuteUbergraph_ControlledMoved_GunMage_PolymorphEnd_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}

}


