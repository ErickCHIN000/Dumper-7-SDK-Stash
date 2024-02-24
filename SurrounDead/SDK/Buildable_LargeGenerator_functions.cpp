#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_LargeGenerator.Buildable_LargeGenerator_C
// (Actor)

class UClass* ABuildable_LargeGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_LargeGenerator_C");

	return Clss;
}


// Buildable_LargeGenerator_C Buildable_LargeGenerator.Default__Buildable_LargeGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_LargeGenerator_C* ABuildable_LargeGenerator_C::GetDefaultObj()
{
	static class ABuildable_LargeGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_LargeGenerator_C*>(ABuildable_LargeGenerator_C::StaticClass()->DefaultObject);

	return Default;
}

}


