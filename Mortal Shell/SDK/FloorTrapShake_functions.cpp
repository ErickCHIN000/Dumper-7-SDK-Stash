#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FloorTrapShake.FloorTrapShake_C
// (None)

class UClass* UFloorTrapShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FloorTrapShake_C");

	return Clss;
}


// FloorTrapShake_C FloorTrapShake.Default__FloorTrapShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFloorTrapShake_C* UFloorTrapShake_C::GetDefaultObj()
{
	static class UFloorTrapShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFloorTrapShake_C*>(UFloorTrapShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


