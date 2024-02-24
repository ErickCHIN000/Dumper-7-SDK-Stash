#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTakeDamageCameraShake.PlayerTakeDamageCameraShake_C
// (None)

class UClass* UPlayerTakeDamageCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTakeDamageCameraShake_C");

	return Clss;
}


// PlayerTakeDamageCameraShake_C PlayerTakeDamageCameraShake.Default__PlayerTakeDamageCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTakeDamageCameraShake_C* UPlayerTakeDamageCameraShake_C::GetDefaultObj()
{
	static class UPlayerTakeDamageCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTakeDamageCameraShake_C*>(UPlayerTakeDamageCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


