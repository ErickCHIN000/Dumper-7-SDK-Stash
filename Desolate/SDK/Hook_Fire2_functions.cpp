#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hook_Fire2.Hook_Fire2_C
// (Actor)

class UClass* AHook_Fire2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hook_Fire2_C");

	return Clss;
}


// Hook_Fire2_C Hook_Fire2.Default__Hook_Fire2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHook_Fire2_C* AHook_Fire2_C::GetDefaultObj()
{
	static class AHook_Fire2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHook_Fire2_C*>(AHook_Fire2_C::StaticClass()->DefaultObject);

	return Default;
}

}


