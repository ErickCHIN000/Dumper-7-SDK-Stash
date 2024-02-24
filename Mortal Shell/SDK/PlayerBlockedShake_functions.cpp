#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerBlockedShake.PlayerBlockedShake_C
// (None)

class UClass* UPlayerBlockedShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerBlockedShake_C");

	return Clss;
}


// PlayerBlockedShake_C PlayerBlockedShake.Default__PlayerBlockedShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerBlockedShake_C* UPlayerBlockedShake_C::GetDefaultObj()
{
	static class UPlayerBlockedShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerBlockedShake_C*>(UPlayerBlockedShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


