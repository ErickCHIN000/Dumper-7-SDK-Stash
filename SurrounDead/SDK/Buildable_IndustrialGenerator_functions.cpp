#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_IndustrialGenerator.Buildable_IndustrialGenerator_C
// (Actor)

class UClass* ABuildable_IndustrialGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_IndustrialGenerator_C");

	return Clss;
}


// Buildable_IndustrialGenerator_C Buildable_IndustrialGenerator.Default__Buildable_IndustrialGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_IndustrialGenerator_C* ABuildable_IndustrialGenerator_C::GetDefaultObj()
{
	static class ABuildable_IndustrialGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_IndustrialGenerator_C*>(ABuildable_IndustrialGenerator_C::StaticClass()->DefaultObject);

	return Default;
}

}


