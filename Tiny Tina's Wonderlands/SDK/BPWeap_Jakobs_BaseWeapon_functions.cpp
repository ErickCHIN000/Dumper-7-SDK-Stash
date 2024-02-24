#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C
// (Actor)

class UClass* ABPWeap_Jakobs_BaseWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_Jakobs_BaseWeapon_C");

	return Clss;
}


// BPWeap_Jakobs_BaseWeapon_C BPWeap_Jakobs_BaseWeapon.Default__BPWeap_Jakobs_BaseWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_Jakobs_BaseWeapon_C* ABPWeap_Jakobs_BaseWeapon_C::GetDefaultObj()
{
	static class ABPWeap_Jakobs_BaseWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_Jakobs_BaseWeapon_C*>(ABPWeap_Jakobs_BaseWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.ShowMagBones
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Jakobs_BaseWeapon_C::ShowMagBones()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Jakobs_BaseWeapon_C", "ShowMagBones");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.HideMagBones
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Jakobs_BaseWeapon_C::HideMagBones()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Jakobs_BaseWeapon_C", "HideMagBones");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Jakobs_BaseWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Jakobs_BaseWeapon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


