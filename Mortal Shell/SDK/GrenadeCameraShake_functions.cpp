#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrenadeCameraShake.GrenadeCameraShake_C
// (None)

class UClass* UGrenadeCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrenadeCameraShake_C");

	return Clss;
}


// GrenadeCameraShake_C GrenadeCameraShake.Default__GrenadeCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrenadeCameraShake_C* UGrenadeCameraShake_C::GetDefaultObj()
{
	static class UGrenadeCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrenadeCameraShake_C*>(UGrenadeCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


