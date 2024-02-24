#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallMid.Buildable_WoodenWallMid_C
// (Actor)

class UClass* ABuildable_WoodenWallMid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallMid_C");

	return Clss;
}


// Buildable_WoodenWallMid_C Buildable_WoodenWallMid.Default__Buildable_WoodenWallMid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallMid_C* ABuildable_WoodenWallMid_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallMid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallMid_C*>(ABuildable_WoodenWallMid_C::StaticClass()->DefaultObject);

	return Default;
}

}


