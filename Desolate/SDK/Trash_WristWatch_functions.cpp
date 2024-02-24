#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_WristWatch.Trash_WristWatch_C
// (Actor)

class UClass* ATrash_WristWatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_WristWatch_C");

	return Clss;
}


// Trash_WristWatch_C Trash_WristWatch.Default__Trash_WristWatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_WristWatch_C* ATrash_WristWatch_C::GetDefaultObj()
{
	static class ATrash_WristWatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_WristWatch_C*>(ATrash_WristWatch_C::StaticClass()->DefaultObject);

	return Default;
}

}


