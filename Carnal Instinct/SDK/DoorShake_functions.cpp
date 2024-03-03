#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoorShake.DoorShake_C
// (None)

class UClass* UDoorShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoorShake_C");

	return Clss;
}


// DoorShake_C DoorShake.Default__DoorShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoorShake_C* UDoorShake_C::GetDefaultObj()
{
	static class UDoorShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoorShake_C*>(UDoorShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


