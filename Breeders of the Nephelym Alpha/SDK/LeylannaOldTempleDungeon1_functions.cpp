#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaOldTempleDungeon1.LeylannaOldTempleDungeon1_C
// (None)

class UClass* ULeylannaOldTempleDungeon1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaOldTempleDungeon1_C");

	return Clss;
}


// LeylannaOldTempleDungeon1_C LeylannaOldTempleDungeon1.Default__LeylannaOldTempleDungeon1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaOldTempleDungeon1_C* ULeylannaOldTempleDungeon1_C::GetDefaultObj()
{
	static class ULeylannaOldTempleDungeon1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaOldTempleDungeon1_C*>(ULeylannaOldTempleDungeon1_C::StaticClass()->DefaultObject);

	return Default;
}

}


