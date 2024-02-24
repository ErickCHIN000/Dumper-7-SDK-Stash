#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Spectacles.Trash_Spectacles_C
// (Actor)

class UClass* ATrash_Spectacles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Spectacles_C");

	return Clss;
}


// Trash_Spectacles_C Trash_Spectacles.Default__Trash_Spectacles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Spectacles_C* ATrash_Spectacles_C::GetDefaultObj()
{
	static class ATrash_Spectacles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Spectacles_C*>(ATrash_Spectacles_C::StaticClass()->DefaultObject);

	return Default;
}

}


