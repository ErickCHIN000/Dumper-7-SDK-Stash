#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_VLA_BaseWeapon.BPWeap_VLA_BaseWeapon_C
// (Actor)

class UClass* ABPWeap_VLA_BaseWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_VLA_BaseWeapon_C");

	return Clss;
}


// BPWeap_VLA_BaseWeapon_C BPWeap_VLA_BaseWeapon.Default__BPWeap_VLA_BaseWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_VLA_BaseWeapon_C* ABPWeap_VLA_BaseWeapon_C::GetDefaultObj()
{
	static class ABPWeap_VLA_BaseWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_VLA_BaseWeapon_C*>(ABPWeap_VLA_BaseWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_VLA_BaseWeapon.BPWeap_VLA_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_VLA_BaseWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_VLA_BaseWeapon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_VLA_BaseWeapon.BPWeap_VLA_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_VLA_BaseWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_VLA_BaseWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_VLA_BaseWeapon.BPWeap_VLA_BaseWeapon_C.ExecuteUbergraph_BPWeap_VLA_BaseWeapon
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_VLA_BaseWeapon_C::ExecuteUbergraph_BPWeap_VLA_BaseWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_VLA_BaseWeapon_C", "ExecuteUbergraph_BPWeap_VLA_BaseWeapon");

	Params::ABPWeap_VLA_BaseWeapon_C_ExecuteUbergraph_BPWeap_VLA_BaseWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


