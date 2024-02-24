#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SexyCameraShake.SexyCameraShake_C
// (None)

class UClass* USexyCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCameraShake_C");

	return Clss;
}


// SexyCameraShake_C SexyCameraShake.Default__SexyCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USexyCameraShake_C* USexyCameraShake_C::GetDefaultObj()
{
	static class USexyCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCameraShake_C*>(USexyCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


