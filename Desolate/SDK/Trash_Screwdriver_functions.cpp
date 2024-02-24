#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Screwdriver.Trash_Screwdriver_C
// (Actor)

class UClass* ATrash_Screwdriver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Screwdriver_C");

	return Clss;
}


// Trash_Screwdriver_C Trash_Screwdriver.Default__Trash_Screwdriver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Screwdriver_C* ATrash_Screwdriver_C::GetDefaultObj()
{
	static class ATrash_Screwdriver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Screwdriver_C*>(ATrash_Screwdriver_C::StaticClass()->DefaultObject);

	return Default;
}

}


