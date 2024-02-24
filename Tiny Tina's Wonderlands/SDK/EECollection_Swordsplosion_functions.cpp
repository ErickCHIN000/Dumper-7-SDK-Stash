#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EECollection_Swordsplosion.EECollection_Swordsplosion_C
// (None)

class UClass* UEECollection_Swordsplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EECollection_Swordsplosion_C");

	return Clss;
}


// EECollection_Swordsplosion_C EECollection_Swordsplosion.Default__EECollection_Swordsplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEECollection_Swordsplosion_C* UEECollection_Swordsplosion_C::GetDefaultObj()
{
	static class UEECollection_Swordsplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEECollection_Swordsplosion_C*>(UEECollection_Swordsplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


