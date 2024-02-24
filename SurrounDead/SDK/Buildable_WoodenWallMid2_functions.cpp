#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallMid2.Buildable_WoodenWallMid2_C
// (Actor)

class UClass* ABuildable_WoodenWallMid2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallMid2_C");

	return Clss;
}


// Buildable_WoodenWallMid2_C Buildable_WoodenWallMid2.Default__Buildable_WoodenWallMid2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallMid2_C* ABuildable_WoodenWallMid2_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallMid2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallMid2_C*>(ABuildable_WoodenWallMid2_C::StaticClass()->DefaultObject);

	return Default;
}

}


