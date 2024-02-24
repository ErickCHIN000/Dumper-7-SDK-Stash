#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallGableTop.Buildable_WoodenWallGableTop_C
// (Actor)

class UClass* ABuildable_WoodenWallGableTop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallGableTop_C");

	return Clss;
}


// Buildable_WoodenWallGableTop_C Buildable_WoodenWallGableTop.Default__Buildable_WoodenWallGableTop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallGableTop_C* ABuildable_WoodenWallGableTop_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallGableTop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallGableTop_C*>(ABuildable_WoodenWallGableTop_C::StaticClass()->DefaultObject);

	return Default;
}

}


