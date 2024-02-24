#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ManiacDeathContainerQuest.ManiacDeathContainerQuest_C
// (Actor)

class UClass* AManiacDeathContainerQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManiacDeathContainerQuest_C");

	return Clss;
}


// ManiacDeathContainerQuest_C ManiacDeathContainerQuest.Default__ManiacDeathContainerQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AManiacDeathContainerQuest_C* AManiacDeathContainerQuest_C::GetDefaultObj()
{
	static class AManiacDeathContainerQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AManiacDeathContainerQuest_C*>(AManiacDeathContainerQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


