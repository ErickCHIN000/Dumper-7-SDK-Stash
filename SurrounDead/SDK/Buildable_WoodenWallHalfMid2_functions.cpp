#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallHalfMid2.Buildable_WoodenWallHalfMid2_C
// (Actor)

class UClass* ABuildable_WoodenWallHalfMid2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallHalfMid2_C");

	return Clss;
}


// Buildable_WoodenWallHalfMid2_C Buildable_WoodenWallHalfMid2.Default__Buildable_WoodenWallHalfMid2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallHalfMid2_C* ABuildable_WoodenWallHalfMid2_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallHalfMid2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallHalfMid2_C*>(ABuildable_WoodenWallHalfMid2_C::StaticClass()->DefaultObject);

	return Default;
}

}


