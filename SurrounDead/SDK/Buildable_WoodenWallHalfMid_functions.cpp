#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallHalfMid.Buildable_WoodenWallHalfMid_C
// (Actor)

class UClass* ABuildable_WoodenWallHalfMid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallHalfMid_C");

	return Clss;
}


// Buildable_WoodenWallHalfMid_C Buildable_WoodenWallHalfMid.Default__Buildable_WoodenWallHalfMid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallHalfMid_C* ABuildable_WoodenWallHalfMid_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallHalfMid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallHalfMid_C*>(ABuildable_WoodenWallHalfMid_C::StaticClass()->DefaultObject);

	return Default;
}

}


