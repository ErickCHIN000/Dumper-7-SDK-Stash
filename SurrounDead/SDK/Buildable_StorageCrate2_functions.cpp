#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_StorageCrate2.Buildable_StorageCrate2_C
// (Actor)

class UClass* ABuildable_StorageCrate2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_StorageCrate2_C");

	return Clss;
}


// Buildable_StorageCrate2_C Buildable_StorageCrate2.Default__Buildable_StorageCrate2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_StorageCrate2_C* ABuildable_StorageCrate2_C::GetDefaultObj()
{
	static class ABuildable_StorageCrate2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_StorageCrate2_C*>(ABuildable_StorageCrate2_C::StaticClass()->DefaultObject);

	return Default;
}

}


