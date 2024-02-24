#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_SmallGenerator.Buildable_SmallGenerator_C
// (Actor)

class UClass* ABuildable_SmallGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_SmallGenerator_C");

	return Clss;
}


// Buildable_SmallGenerator_C Buildable_SmallGenerator.Default__Buildable_SmallGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_SmallGenerator_C* ABuildable_SmallGenerator_C::GetDefaultObj()
{
	static class ABuildable_SmallGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_SmallGenerator_C*>(ABuildable_SmallGenerator_C::StaticClass()->DefaultObject);

	return Default;
}

}


