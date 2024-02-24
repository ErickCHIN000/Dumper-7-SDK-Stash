#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Sprayer.Trash_Sprayer_C
// (Actor)

class UClass* ATrash_Sprayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Sprayer_C");

	return Clss;
}


// Trash_Sprayer_C Trash_Sprayer.Default__Trash_Sprayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Sprayer_C* ATrash_Sprayer_C::GetDefaultObj()
{
	static class ATrash_Sprayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Sprayer_C*>(ATrash_Sprayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


