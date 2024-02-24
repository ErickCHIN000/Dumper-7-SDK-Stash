#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NLFiremanDeathContainer.NLFiremanDeathContainer_C
// (Actor)

class UClass* ANLFiremanDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NLFiremanDeathContainer_C");

	return Clss;
}


// NLFiremanDeathContainer_C NLFiremanDeathContainer.Default__NLFiremanDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANLFiremanDeathContainer_C* ANLFiremanDeathContainer_C::GetDefaultObj()
{
	static class ANLFiremanDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANLFiremanDeathContainer_C*>(ANLFiremanDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


