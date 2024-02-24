#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_BrokenFan.Trash_BrokenFan_C
// (Actor)

class UClass* ATrash_BrokenFan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_BrokenFan_C");

	return Clss;
}


// Trash_BrokenFan_C Trash_BrokenFan.Default__Trash_BrokenFan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_BrokenFan_C* ATrash_BrokenFan_C::GetDefaultObj()
{
	static class ATrash_BrokenFan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_BrokenFan_C*>(ATrash_BrokenFan_C::StaticClass()->DefaultObject);

	return Default;
}

}


