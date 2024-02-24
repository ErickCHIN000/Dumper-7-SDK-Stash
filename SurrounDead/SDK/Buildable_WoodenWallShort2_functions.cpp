#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallShort2.Buildable_WoodenWallShort2_C
// (Actor)

class UClass* ABuildable_WoodenWallShort2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallShort2_C");

	return Clss;
}


// Buildable_WoodenWallShort2_C Buildable_WoodenWallShort2.Default__Buildable_WoodenWallShort2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallShort2_C* ABuildable_WoodenWallShort2_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallShort2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallShort2_C*>(ABuildable_WoodenWallShort2_C::StaticClass()->DefaultObject);

	return Default;
}

}


