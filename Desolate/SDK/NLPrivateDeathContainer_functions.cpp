#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NLPrivateDeathContainer.NLPrivateDeathContainer_C
// (Actor)

class UClass* ANLPrivateDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NLPrivateDeathContainer_C");

	return Clss;
}


// NLPrivateDeathContainer_C NLPrivateDeathContainer.Default__NLPrivateDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANLPrivateDeathContainer_C* ANLPrivateDeathContainer_C::GetDefaultObj()
{
	static class ANLPrivateDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANLPrivateDeathContainer_C*>(ANLPrivateDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


