#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_StorageCrate4.Buildable_StorageCrate4_C
// (Actor)

class UClass* ABuildable_StorageCrate4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_StorageCrate4_C");

	return Clss;
}


// Buildable_StorageCrate4_C Buildable_StorageCrate4.Default__Buildable_StorageCrate4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_StorageCrate4_C* ABuildable_StorageCrate4_C::GetDefaultObj()
{
	static class ABuildable_StorageCrate4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_StorageCrate4_C*>(ABuildable_StorageCrate4_C::StaticClass()->DefaultObject);

	return Default;
}

}


