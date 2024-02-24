#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_OldLamp.Trash_OldLamp_C
// (Actor)

class UClass* ATrash_OldLamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_OldLamp_C");

	return Clss;
}


// Trash_OldLamp_C Trash_OldLamp.Default__Trash_OldLamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_OldLamp_C* ATrash_OldLamp_C::GetDefaultObj()
{
	static class ATrash_OldLamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_OldLamp_C*>(ATrash_OldLamp_C::StaticClass()->DefaultObject);

	return Default;
}

}


