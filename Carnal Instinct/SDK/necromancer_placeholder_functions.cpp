#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass necromancer_placeholder.necromancer_placeholder_C
// (Actor)

class UClass* ANecromancer_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("necromancer_placeholder_C");

	return Clss;
}


// necromancer_placeholder_C necromancer_placeholder.Default__necromancer_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANecromancer_placeholder_C* ANecromancer_placeholder_C::GetDefaultObj()
{
	static class ANecromancer_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANecromancer_placeholder_C*>(ANecromancer_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


