#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Bulb.Trash_Bulb_C
// (Actor)

class UClass* ATrash_Bulb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Bulb_C");

	return Clss;
}


// Trash_Bulb_C Trash_Bulb.Default__Trash_Bulb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Bulb_C* ATrash_Bulb_C::GetDefaultObj()
{
	static class ATrash_Bulb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Bulb_C*>(ATrash_Bulb_C::StaticClass()->DefaultObject);

	return Default;
}

}


