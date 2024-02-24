#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_BrokenMetronome.Trash_BrokenMetronome_C
// (Actor)

class UClass* ATrash_BrokenMetronome_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_BrokenMetronome_C");

	return Clss;
}


// Trash_BrokenMetronome_C Trash_BrokenMetronome.Default__Trash_BrokenMetronome_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_BrokenMetronome_C* ATrash_BrokenMetronome_C::GetDefaultObj()
{
	static class ATrash_BrokenMetronome_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_BrokenMetronome_C*>(ATrash_BrokenMetronome_C::StaticClass()->DefaultObject);

	return Default;
}

}


