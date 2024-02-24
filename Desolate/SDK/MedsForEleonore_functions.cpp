#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MedsForEleonore.MedsForEleonore_C
// (Actor)

class UClass* AMedsForEleonore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MedsForEleonore_C");

	return Clss;
}


// MedsForEleonore_C MedsForEleonore.Default__MedsForEleonore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMedsForEleonore_C* AMedsForEleonore_C::GetDefaultObj()
{
	static class AMedsForEleonore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMedsForEleonore_C*>(AMedsForEleonore_C::StaticClass()->DefaultObject);

	return Default;
}

}


