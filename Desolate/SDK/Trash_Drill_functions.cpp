#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Drill.Trash_Drill_C
// (Actor)

class UClass* ATrash_Drill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Drill_C");

	return Clss;
}


// Trash_Drill_C Trash_Drill.Default__Trash_Drill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Drill_C* ATrash_Drill_C::GetDefaultObj()
{
	static class ATrash_Drill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Drill_C*>(ATrash_Drill_C::StaticClass()->DefaultObject);

	return Default;
}

}


