#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenStairsHalf.Buildable_WoodenStairsHalf_C
// (Actor)

class UClass* ABuildable_WoodenStairsHalf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenStairsHalf_C");

	return Clss;
}


// Buildable_WoodenStairsHalf_C Buildable_WoodenStairsHalf.Default__Buildable_WoodenStairsHalf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenStairsHalf_C* ABuildable_WoodenStairsHalf_C::GetDefaultObj()
{
	static class ABuildable_WoodenStairsHalf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenStairsHalf_C*>(ABuildable_WoodenStairsHalf_C::StaticClass()->DefaultObject);

	return Default;
}

}


