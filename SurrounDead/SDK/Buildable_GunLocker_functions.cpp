#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_GunLocker.Buildable_GunLocker_C
// (Actor)

class UClass* ABuildable_GunLocker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_GunLocker_C");

	return Clss;
}


// Buildable_GunLocker_C Buildable_GunLocker.Default__Buildable_GunLocker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_GunLocker_C* ABuildable_GunLocker_C::GetDefaultObj()
{
	static class ABuildable_GunLocker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_GunLocker_C*>(ABuildable_GunLocker_C::StaticClass()->DefaultObject);

	return Default;
}

}


