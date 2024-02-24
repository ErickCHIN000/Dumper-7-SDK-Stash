#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaOldTempleDungeon.LeylannaOldTempleDungeon_C
// (None)

class UClass* ULeylannaOldTempleDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaOldTempleDungeon_C");

	return Clss;
}


// LeylannaOldTempleDungeon_C LeylannaOldTempleDungeon.Default__LeylannaOldTempleDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaOldTempleDungeon_C* ULeylannaOldTempleDungeon_C::GetDefaultObj()
{
	static class ULeylannaOldTempleDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaOldTempleDungeon_C*>(ULeylannaOldTempleDungeon_C::StaticClass()->DefaultObject);

	return Default;
}

}


