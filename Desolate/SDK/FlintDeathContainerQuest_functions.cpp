#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlintDeathContainerQuest.FlintDeathContainerQuest_C
// (Actor)

class UClass* AFlintDeathContainerQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlintDeathContainerQuest_C");

	return Clss;
}


// FlintDeathContainerQuest_C FlintDeathContainerQuest.Default__FlintDeathContainerQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFlintDeathContainerQuest_C* AFlintDeathContainerQuest_C::GetDefaultObj()
{
	static class AFlintDeathContainerQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFlintDeathContainerQuest_C*>(AFlintDeathContainerQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


