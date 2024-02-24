#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Binoculars.Trash_Binoculars_C
// (Actor)

class UClass* ATrash_Binoculars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Binoculars_C");

	return Clss;
}


// Trash_Binoculars_C Trash_Binoculars.Default__Trash_Binoculars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Binoculars_C* ATrash_Binoculars_C::GetDefaultObj()
{
	static class ATrash_Binoculars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Binoculars_C*>(ATrash_Binoculars_C::StaticClass()->DefaultObject);

	return Default;
}

}


