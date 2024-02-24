#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeHealing.DmgTypeHealing_C
// (None)

class UClass* UDmgTypeHealing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeHealing_C");

	return Clss;
}


// DmgTypeHealing_C DmgTypeHealing.Default__DmgTypeHealing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeHealing_C* UDmgTypeHealing_C::GetDefaultObj()
{
	static class UDmgTypeHealing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeHealing_C*>(UDmgTypeHealing_C::StaticClass()->DefaultObject);

	return Default;
}

}


