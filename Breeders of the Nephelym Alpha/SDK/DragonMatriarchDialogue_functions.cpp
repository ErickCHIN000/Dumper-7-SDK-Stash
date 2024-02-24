#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragonMatriarchDialogue.DragonMatriarchDialogue_C
// (None)

class UClass* UDragonMatriarchDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonMatriarchDialogue_C");

	return Clss;
}


// DragonMatriarchDialogue_C DragonMatriarchDialogue.Default__DragonMatriarchDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragonMatriarchDialogue_C* UDragonMatriarchDialogue_C::GetDefaultObj()
{
	static class UDragonMatriarchDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonMatriarchDialogue_C*>(UDragonMatriarchDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


