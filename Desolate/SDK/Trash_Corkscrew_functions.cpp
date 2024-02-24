#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Corkscrew.Trash_Corkscrew_C
// (Actor)

class UClass* ATrash_Corkscrew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Corkscrew_C");

	return Clss;
}


// Trash_Corkscrew_C Trash_Corkscrew.Default__Trash_Corkscrew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Corkscrew_C* ATrash_Corkscrew_C::GetDefaultObj()
{
	static class ATrash_Corkscrew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Corkscrew_C*>(ATrash_Corkscrew_C::StaticClass()->DefaultObject);

	return Default;
}

}


