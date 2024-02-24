#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CatchableCloseRangeWeaponBase.CatchableCloseRangeWeaponBase_C
// (Actor)

class UClass* ACatchableCloseRangeWeaponBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CatchableCloseRangeWeaponBase_C");

	return Clss;
}


// CatchableCloseRangeWeaponBase_C CatchableCloseRangeWeaponBase.Default__CatchableCloseRangeWeaponBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACatchableCloseRangeWeaponBase_C* ACatchableCloseRangeWeaponBase_C::GetDefaultObj()
{
	static class ACatchableCloseRangeWeaponBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACatchableCloseRangeWeaponBase_C*>(ACatchableCloseRangeWeaponBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CatchableCloseRangeWeaponBase.CatchableCloseRangeWeaponBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACatchableCloseRangeWeaponBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatchableCloseRangeWeaponBase_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CatchableCloseRangeWeaponBase.CatchableCloseRangeWeaponBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACatchableCloseRangeWeaponBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatchableCloseRangeWeaponBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CatchableCloseRangeWeaponBase.CatchableCloseRangeWeaponBase_C.Equipment_Set
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Attached                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACatchableCloseRangeWeaponBase_C::Equipment_Set(bool Attached, bool Temp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatchableCloseRangeWeaponBase_C", "Equipment_Set");

	Params::ACatchableCloseRangeWeaponBase_C_Equipment_Set_Params Parms{};

	Parms.Attached = Attached;
	Parms.Temp = Temp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CatchableCloseRangeWeaponBase.CatchableCloseRangeWeaponBase_C.ExecuteUbergraph_CatchableCloseRangeWeaponBase
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_attached                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_temp                                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACatchableCloseRangeWeaponBase_C::ExecuteUbergraph_CatchableCloseRangeWeaponBase(int32 EntryPoint, bool K2Node_Event_attached, bool K2Node_Event_temp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatchableCloseRangeWeaponBase_C", "ExecuteUbergraph_CatchableCloseRangeWeaponBase");

	Params::ACatchableCloseRangeWeaponBase_C_ExecuteUbergraph_CatchableCloseRangeWeaponBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_attached = K2Node_Event_attached;
	Parms.K2Node_Event_temp = K2Node_Event_temp;

	UObject::ProcessEvent(Func, &Parms);

}

}


