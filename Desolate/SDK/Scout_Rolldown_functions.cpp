#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_Rolldown.Scout_Rolldown_C
// (None)

class UClass* UScout_Rolldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_Rolldown_C");

	return Clss;
}


// Scout_Rolldown_C Scout_Rolldown.Default__Scout_Rolldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_Rolldown_C* UScout_Rolldown_C::GetDefaultObj()
{
	static class UScout_Rolldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_Rolldown_C*>(UScout_Rolldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


