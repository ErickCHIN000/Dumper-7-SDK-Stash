#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Toaster.Trash_Toaster_C
// (Actor)

class UClass* ATrash_Toaster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Toaster_C");

	return Clss;
}


// Trash_Toaster_C Trash_Toaster.Default__Trash_Toaster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Toaster_C* ATrash_Toaster_C::GetDefaultObj()
{
	static class ATrash_Toaster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Toaster_C*>(ATrash_Toaster_C::StaticClass()->DefaultObject);

	return Default;
}

}


