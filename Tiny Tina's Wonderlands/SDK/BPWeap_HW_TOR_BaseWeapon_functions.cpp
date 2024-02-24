#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C
// (Actor)

class UClass* ABPWeap_HW_TOR_BaseWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_HW_TOR_BaseWeapon_C");

	return Clss;
}


// BPWeap_HW_TOR_BaseWeapon_C BPWeap_HW_TOR_BaseWeapon.Default__BPWeap_HW_TOR_BaseWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_HW_TOR_BaseWeapon_C* ABPWeap_HW_TOR_BaseWeapon_C::GetDefaultObj()
{
	static class ABPWeap_HW_TOR_BaseWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_HW_TOR_BaseWeapon_C*>(ABPWeap_HW_TOR_BaseWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C.VisibleAmmoUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_HW_TOR_BaseWeapon_C::VisibleAmmoUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_TOR_BaseWeapon_C", "VisibleAmmoUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C.ShowRocketBone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_HW_TOR_BaseWeapon_C::ShowRocketBone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_TOR_BaseWeapon_C", "ShowRocketBone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C.HideRocketBone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_HW_TOR_BaseWeapon_C::HideRocketBone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_TOR_BaseWeapon_C", "HideRocketBone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_HW_TOR_BaseWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_TOR_BaseWeapon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_HW_TOR_BaseWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_TOR_BaseWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C.HideRocket
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_HW_TOR_BaseWeapon_C::HideRocket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_TOR_BaseWeapon_C", "HideRocket");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C.ExecuteUbergraph_BPWeap_HW_TOR_BaseWeapon
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void ABPWeap_HW_TOR_BaseWeapon_C::ExecuteUbergraph_BPWeap_HW_TOR_BaseWeapon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_TOR_BaseWeapon_C", "ExecuteUbergraph_BPWeap_HW_TOR_BaseWeapon");

	Params::ABPWeap_HW_TOR_BaseWeapon_C_ExecuteUbergraph_BPWeap_HW_TOR_BaseWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}


