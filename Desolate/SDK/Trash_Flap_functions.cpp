#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Flap.Trash_Flap_C
// (Actor)

class UClass* ATrash_Flap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Flap_C");

	return Clss;
}


// Trash_Flap_C Trash_Flap.Default__Trash_Flap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Flap_C* ATrash_Flap_C::GetDefaultObj()
{
	static class ATrash_Flap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Flap_C*>(ATrash_Flap_C::StaticClass()->DefaultObject);

	return Default;
}

}


