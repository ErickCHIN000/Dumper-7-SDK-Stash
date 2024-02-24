#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Headlight.Trash_Headlight_C
// (Actor)

class UClass* ATrash_Headlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Headlight_C");

	return Clss;
}


// Trash_Headlight_C Trash_Headlight.Default__Trash_Headlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Headlight_C* ATrash_Headlight_C::GetDefaultObj()
{
	static class ATrash_Headlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Headlight_C*>(ATrash_Headlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


