#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GolemFootstepShake.GolemFootstepShake_C
// (None)

class UClass* UGolemFootstepShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GolemFootstepShake_C");

	return Clss;
}


// GolemFootstepShake_C GolemFootstepShake.Default__GolemFootstepShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGolemFootstepShake_C* UGolemFootstepShake_C::GetDefaultObj()
{
	static class UGolemFootstepShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGolemFootstepShake_C*>(UGolemFootstepShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


