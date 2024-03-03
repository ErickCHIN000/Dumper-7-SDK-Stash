#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass liquid_centaurmachine_placeholder.liquid_centaurmachine_placeholder_C
// (Actor)

class UClass* ALiquid_centaurmachine_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("liquid_centaurmachine_placeholder_C");

	return Clss;
}


// liquid_centaurmachine_placeholder_C liquid_centaurmachine_placeholder.Default__liquid_centaurmachine_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALiquid_centaurmachine_placeholder_C* ALiquid_centaurmachine_placeholder_C::GetDefaultObj()
{
	static class ALiquid_centaurmachine_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALiquid_centaurmachine_placeholder_C*>(ALiquid_centaurmachine_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


