#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Damper.Trash_Damper_C
// (Actor)

class UClass* ATrash_Damper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Damper_C");

	return Clss;
}


// Trash_Damper_C Trash_Damper.Default__Trash_Damper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Damper_C* ATrash_Damper_C::GetDefaultObj()
{
	static class ATrash_Damper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Damper_C*>(ATrash_Damper_C::StaticClass()->DefaultObject);

	return Default;
}

}


