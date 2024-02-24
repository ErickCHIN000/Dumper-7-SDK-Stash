#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Magnifier.Trash_Magnifier_C
// (Actor)

class UClass* ATrash_Magnifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Magnifier_C");

	return Clss;
}


// Trash_Magnifier_C Trash_Magnifier.Default__Trash_Magnifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Magnifier_C* ATrash_Magnifier_C::GetDefaultObj()
{
	static class ATrash_Magnifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Magnifier_C*>(ATrash_Magnifier_C::StaticClass()->DefaultObject);

	return Default;
}

}


