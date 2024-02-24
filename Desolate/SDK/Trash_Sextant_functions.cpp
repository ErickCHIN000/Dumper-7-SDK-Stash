#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Sextant.Trash_Sextant_C
// (Actor)

class UClass* ATrash_Sextant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Sextant_C");

	return Clss;
}


// Trash_Sextant_C Trash_Sextant.Default__Trash_Sextant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Sextant_C* ATrash_Sextant_C::GetDefaultObj()
{
	static class ATrash_Sextant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Sextant_C*>(ATrash_Sextant_C::StaticClass()->DefaultObject);

	return Default;
}

}


