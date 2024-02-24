#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NLSergeantDeathContainer.NLSergeantDeathContainer_C
// (Actor)

class UClass* ANLSergeantDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NLSergeantDeathContainer_C");

	return Clss;
}


// NLSergeantDeathContainer_C NLSergeantDeathContainer.Default__NLSergeantDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANLSergeantDeathContainer_C* ANLSergeantDeathContainer_C::GetDefaultObj()
{
	static class ANLSergeantDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANLSergeantDeathContainer_C*>(ANLSergeantDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


