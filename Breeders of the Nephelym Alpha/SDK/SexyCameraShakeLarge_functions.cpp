#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SexyCameraShakeLarge.SexyCameraShakeLarge_C
// (None)

class UClass* USexyCameraShakeLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCameraShakeLarge_C");

	return Clss;
}


// SexyCameraShakeLarge_C SexyCameraShakeLarge.Default__SexyCameraShakeLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USexyCameraShakeLarge_C* USexyCameraShakeLarge_C::GetDefaultObj()
{
	static class USexyCameraShakeLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCameraShakeLarge_C*>(USexyCameraShakeLarge_C::StaticClass()->DefaultObject);

	return Default;
}

}


