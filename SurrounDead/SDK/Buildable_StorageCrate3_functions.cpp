#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_StorageCrate3.Buildable_StorageCrate3_C
// (Actor)

class UClass* ABuildable_StorageCrate3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_StorageCrate3_C");

	return Clss;
}


// Buildable_StorageCrate3_C Buildable_StorageCrate3.Default__Buildable_StorageCrate3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_StorageCrate3_C* ABuildable_StorageCrate3_C::GetDefaultObj()
{
	static class ABuildable_StorageCrate3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_StorageCrate3_C*>(ABuildable_StorageCrate3_C::StaticClass()->DefaultObject);

	return Default;
}

}


