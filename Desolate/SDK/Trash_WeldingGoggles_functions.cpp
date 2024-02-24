#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_WeldingGoggles.Trash_WeldingGoggles_C
// (Actor)

class UClass* ATrash_WeldingGoggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_WeldingGoggles_C");

	return Clss;
}


// Trash_WeldingGoggles_C Trash_WeldingGoggles.Default__Trash_WeldingGoggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_WeldingGoggles_C* ATrash_WeldingGoggles_C::GetDefaultObj()
{
	static class ATrash_WeldingGoggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_WeldingGoggles_C*>(ATrash_WeldingGoggles_C::StaticClass()->DefaultObject);

	return Default;
}

}


