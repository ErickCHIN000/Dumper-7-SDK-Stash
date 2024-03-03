#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass alchemist_placeholder.alchemist_placeholder_C
// (Actor)

class UClass* AAlchemist_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("alchemist_placeholder_C");

	return Clss;
}


// alchemist_placeholder_C alchemist_placeholder.Default__alchemist_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAlchemist_placeholder_C* AAlchemist_placeholder_C::GetDefaultObj()
{
	static class AAlchemist_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAlchemist_placeholder_C*>(AAlchemist_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


