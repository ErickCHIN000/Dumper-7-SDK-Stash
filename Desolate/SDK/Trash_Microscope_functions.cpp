#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Microscope.Trash_Microscope_C
// (Actor)

class UClass* ATrash_Microscope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Microscope_C");

	return Clss;
}


// Trash_Microscope_C Trash_Microscope.Default__Trash_Microscope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Microscope_C* ATrash_Microscope_C::GetDefaultObj()
{
	static class ATrash_Microscope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Microscope_C*>(ATrash_Microscope_C::StaticClass()->DefaultObject);

	return Default;
}

}


