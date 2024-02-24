#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_StorageCrate.Buildable_StorageCrate_C
// (Actor)

class UClass* ABuildable_StorageCrate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_StorageCrate_C");

	return Clss;
}


// Buildable_StorageCrate_C Buildable_StorageCrate.Default__Buildable_StorageCrate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_StorageCrate_C* ABuildable_StorageCrate_C::GetDefaultObj()
{
	static class ABuildable_StorageCrate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_StorageCrate_C*>(ABuildable_StorageCrate_C::StaticClass()->DefaultObject);

	return Default;
}

}


