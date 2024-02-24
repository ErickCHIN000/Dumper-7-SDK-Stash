#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Clamp.Trash_Clamp_C
// (Actor)

class UClass* ATrash_Clamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Clamp_C");

	return Clss;
}


// Trash_Clamp_C Trash_Clamp.Default__Trash_Clamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Clamp_C* ATrash_Clamp_C::GetDefaultObj()
{
	static class ATrash_Clamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Clamp_C*>(ATrash_Clamp_C::StaticClass()->DefaultObject);

	return Default;
}

}


