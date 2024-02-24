#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_Bleeding_Low.LostControl_Bleeding_Low_C
// (Actor)

class UClass* ALostControl_Bleeding_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_Bleeding_Low_C");

	return Clss;
}


// LostControl_Bleeding_Low_C LostControl_Bleeding_Low.Default__LostControl_Bleeding_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_Bleeding_Low_C* ALostControl_Bleeding_Low_C::GetDefaultObj()
{
	static class ALostControl_Bleeding_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_Bleeding_Low_C*>(ALostControl_Bleeding_Low_C::StaticClass()->DefaultObject);

	return Default;
}

}


