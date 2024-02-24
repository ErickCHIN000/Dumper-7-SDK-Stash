#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChieftainDeathContainer.ChieftainDeathContainer_C
// (Actor)

class UClass* AChieftainDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChieftainDeathContainer_C");

	return Clss;
}


// ChieftainDeathContainer_C ChieftainDeathContainer.Default__ChieftainDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChieftainDeathContainer_C* AChieftainDeathContainer_C::GetDefaultObj()
{
	static class AChieftainDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChieftainDeathContainer_C*>(AChieftainDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


