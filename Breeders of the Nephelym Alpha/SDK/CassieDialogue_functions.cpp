#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieDialogue.CassieDialogue_C
// (None)

class UClass* UCassieDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieDialogue_C");

	return Clss;
}


// CassieDialogue_C CassieDialogue.Default__CassieDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieDialogue_C* UCassieDialogue_C::GetDefaultObj()
{
	static class UCassieDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieDialogue_C*>(UCassieDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


