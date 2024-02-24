#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_PhotoCamera.Trash_PhotoCamera_C
// (Actor)

class UClass* ATrash_PhotoCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_PhotoCamera_C");

	return Clss;
}


// Trash_PhotoCamera_C Trash_PhotoCamera.Default__Trash_PhotoCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_PhotoCamera_C* ATrash_PhotoCamera_C::GetDefaultObj()
{
	static class ATrash_PhotoCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_PhotoCamera_C*>(ATrash_PhotoCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


