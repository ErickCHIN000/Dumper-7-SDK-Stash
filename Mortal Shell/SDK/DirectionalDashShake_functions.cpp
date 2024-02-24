#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DirectionalDashShake.DirectionalDashShake_C
// (None)

class UClass* UDirectionalDashShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DirectionalDashShake_C");

	return Clss;
}


// DirectionalDashShake_C DirectionalDashShake.Default__DirectionalDashShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDirectionalDashShake_C* UDirectionalDashShake_C::GetDefaultObj()
{
	static class UDirectionalDashShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDirectionalDashShake_C*>(UDirectionalDashShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


