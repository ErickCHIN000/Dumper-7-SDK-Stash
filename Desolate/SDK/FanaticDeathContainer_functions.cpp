#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FanaticDeathContainer.FanaticDeathContainer_C
// (Actor)

class UClass* AFanaticDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FanaticDeathContainer_C");

	return Clss;
}


// FanaticDeathContainer_C FanaticDeathContainer.Default__FanaticDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFanaticDeathContainer_C* AFanaticDeathContainer_C::GetDefaultObj()
{
	static class AFanaticDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFanaticDeathContainer_C*>(AFanaticDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


