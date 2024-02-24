#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWall2.Buildable_WoodenWall2_C
// (Actor)

class UClass* ABuildable_WoodenWall2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWall2_C");

	return Clss;
}


// Buildable_WoodenWall2_C Buildable_WoodenWall2.Default__Buildable_WoodenWall2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWall2_C* ABuildable_WoodenWall2_C::GetDefaultObj()
{
	static class ABuildable_WoodenWall2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWall2_C*>(ABuildable_WoodenWall2_C::StaticClass()->DefaultObject);

	return Default;
}

}


