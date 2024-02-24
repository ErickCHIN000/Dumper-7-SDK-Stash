#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Spyglass.Trash_Spyglass_C
// (Actor)

class UClass* ATrash_Spyglass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Spyglass_C");

	return Clss;
}


// Trash_Spyglass_C Trash_Spyglass.Default__Trash_Spyglass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Spyglass_C* ATrash_Spyglass_C::GetDefaultObj()
{
	static class ATrash_Spyglass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Spyglass_C*>(ATrash_Spyglass_C::StaticClass()->DefaultObject);

	return Default;
}

}


