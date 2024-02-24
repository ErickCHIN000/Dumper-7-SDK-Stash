#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_DAL_BaseWeapon.BPWeap_DAL_BaseWeapon_C
// (Actor)

class UClass* ABPWeap_DAL_BaseWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_DAL_BaseWeapon_C");

	return Clss;
}


// BPWeap_DAL_BaseWeapon_C BPWeap_DAL_BaseWeapon.Default__BPWeap_DAL_BaseWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_DAL_BaseWeapon_C* ABPWeap_DAL_BaseWeapon_C::GetDefaultObj()
{
	static class ABPWeap_DAL_BaseWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_DAL_BaseWeapon_C*>(ABPWeap_DAL_BaseWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_DAL_BaseWeapon.BPWeap_DAL_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_DAL_BaseWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_DAL_BaseWeapon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


