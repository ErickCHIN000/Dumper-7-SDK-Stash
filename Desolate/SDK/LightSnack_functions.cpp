#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightSnack.LightSnack_C
// (Actor)

class UClass* ALightSnack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightSnack_C");

	return Clss;
}


// LightSnack_C LightSnack.Default__LightSnack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightSnack_C* ALightSnack_C::GetDefaultObj()
{
	static class ALightSnack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightSnack_C*>(ALightSnack_C::StaticClass()->DefaultObject);

	return Default;
}

}


