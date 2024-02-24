#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChieftainDeathContainerQuest.ChieftainDeathContainerQuest_C
// (Actor)

class UClass* AChieftainDeathContainerQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChieftainDeathContainerQuest_C");

	return Clss;
}


// ChieftainDeathContainerQuest_C ChieftainDeathContainerQuest.Default__ChieftainDeathContainerQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChieftainDeathContainerQuest_C* AChieftainDeathContainerQuest_C::GetDefaultObj()
{
	static class AChieftainDeathContainerQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChieftainDeathContainerQuest_C*>(AChieftainDeathContainerQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


