#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass cook_placeholder.cook_placeholder_C
// (Actor)

class UClass* ACook_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("cook_placeholder_C");

	return Clss;
}


// cook_placeholder_C cook_placeholder.Default__cook_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACook_placeholder_C* ACook_placeholder_C::GetDefaultObj()
{
	static class ACook_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACook_placeholder_C*>(ACook_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


