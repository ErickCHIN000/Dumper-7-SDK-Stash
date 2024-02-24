#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StornFormEndShake.StornFormEndShake_C
// (None)

class UClass* UStornFormEndShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StornFormEndShake_C");

	return Clss;
}


// StornFormEndShake_C StornFormEndShake.Default__StornFormEndShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStornFormEndShake_C* UStornFormEndShake_C::GetDefaultObj()
{
	static class UStornFormEndShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStornFormEndShake_C*>(UStornFormEndShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


