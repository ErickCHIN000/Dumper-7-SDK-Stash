#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Flatiron.Trash_Flatiron_C
// (Actor)

class UClass* ATrash_Flatiron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Flatiron_C");

	return Clss;
}


// Trash_Flatiron_C Trash_Flatiron.Default__Trash_Flatiron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Flatiron_C* ATrash_Flatiron_C::GetDefaultObj()
{
	static class ATrash_Flatiron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Flatiron_C*>(ATrash_Flatiron_C::StaticClass()->DefaultObject);

	return Default;
}

}


