#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeutralDeathContainer.NeutralDeathContainer_C
// (Actor)

class UClass* ANeutralDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeutralDeathContainer_C");

	return Clss;
}


// NeutralDeathContainer_C NeutralDeathContainer.Default__NeutralDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANeutralDeathContainer_C* ANeutralDeathContainer_C::GetDefaultObj()
{
	static class ANeutralDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANeutralDeathContainer_C*>(ANeutralDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


