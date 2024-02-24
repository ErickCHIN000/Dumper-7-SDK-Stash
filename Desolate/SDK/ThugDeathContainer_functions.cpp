#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThugDeathContainer.ThugDeathContainer_C
// (Actor)

class UClass* AThugDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThugDeathContainer_C");

	return Clss;
}


// ThugDeathContainer_C ThugDeathContainer.Default__ThugDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AThugDeathContainer_C* AThugDeathContainer_C::GetDefaultObj()
{
	static class AThugDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AThugDeathContainer_C*>(AThugDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


