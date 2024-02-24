#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadDialogue.DryadDialogue_C
// (None)

class UClass* UDryadDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadDialogue_C");

	return Clss;
}


// DryadDialogue_C DryadDialogue.Default__DryadDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadDialogue_C* UDryadDialogue_C::GetDefaultObj()
{
	static class UDryadDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadDialogue_C*>(UDryadDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


