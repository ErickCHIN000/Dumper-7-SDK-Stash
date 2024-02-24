#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScoutFP_ShakeCrouch.ScoutFP_ShakeCrouch_C
// (None)

class UClass* UScoutFP_ShakeCrouch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoutFP_ShakeCrouch_C");

	return Clss;
}


// ScoutFP_ShakeCrouch_C ScoutFP_ShakeCrouch.Default__ScoutFP_ShakeCrouch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoutFP_ShakeCrouch_C* UScoutFP_ShakeCrouch_C::GetDefaultObj()
{
	static class UScoutFP_ShakeCrouch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoutFP_ShakeCrouch_C*>(UScoutFP_ShakeCrouch_C::StaticClass()->DefaultObject);

	return Default;
}

}


