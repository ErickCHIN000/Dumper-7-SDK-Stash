#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Stapler.Trash_Stapler_C
// (Actor)

class UClass* ATrash_Stapler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Stapler_C");

	return Clss;
}


// Trash_Stapler_C Trash_Stapler.Default__Trash_Stapler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Stapler_C* ATrash_Stapler_C::GetDefaultObj()
{
	static class ATrash_Stapler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Stapler_C*>(ATrash_Stapler_C::StaticClass()->DefaultObject);

	return Default;
}

}


