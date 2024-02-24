#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Shovel.Trash_Shovel_C
// (Actor)

class UClass* ATrash_Shovel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Shovel_C");

	return Clss;
}


// Trash_Shovel_C Trash_Shovel.Default__Trash_Shovel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Shovel_C* ATrash_Shovel_C::GetDefaultObj()
{
	static class ATrash_Shovel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Shovel_C*>(ATrash_Shovel_C::StaticClass()->DefaultObject);

	return Default;
}

}


