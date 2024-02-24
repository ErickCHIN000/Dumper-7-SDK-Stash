#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Save_Player.Save_Player_C
// (None)

class UClass* USave_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Save_Player_C");

	return Clss;
}


// Save_Player_C Save_Player.Default__Save_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USave_Player_C* USave_Player_C::GetDefaultObj()
{
	static class USave_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USave_Player_C*>(USave_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


