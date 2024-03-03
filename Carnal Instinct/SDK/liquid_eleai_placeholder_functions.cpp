#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass liquid_eleai_placeholder.liquid_eleai_placeholder_C
// (Actor)

class UClass* ALiquid_eleai_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("liquid_eleai_placeholder_C");

	return Clss;
}


// liquid_eleai_placeholder_C liquid_eleai_placeholder.Default__liquid_eleai_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALiquid_eleai_placeholder_C* ALiquid_eleai_placeholder_C::GetDefaultObj()
{
	static class ALiquid_eleai_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALiquid_eleai_placeholder_C*>(ALiquid_eleai_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


