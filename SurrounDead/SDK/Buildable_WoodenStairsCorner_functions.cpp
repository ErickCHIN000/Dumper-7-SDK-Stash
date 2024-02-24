#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenStairsCorner.Buildable_WoodenStairsCorner_C
// (Actor)

class UClass* ABuildable_WoodenStairsCorner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenStairsCorner_C");

	return Clss;
}


// Buildable_WoodenStairsCorner_C Buildable_WoodenStairsCorner.Default__Buildable_WoodenStairsCorner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenStairsCorner_C* ABuildable_WoodenStairsCorner_C::GetDefaultObj()
{
	static class ABuildable_WoodenStairsCorner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenStairsCorner_C*>(ABuildable_WoodenStairsCorner_C::StaticClass()->DefaultObject);

	return Default;
}

}


