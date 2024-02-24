#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hook.Hook_C
// (Actor)

class UClass* AHook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hook_C");

	return Clss;
}


// Hook_C Hook.Default__Hook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHook_C* AHook_C::GetDefaultObj()
{
	static class AHook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHook_C*>(AHook_C::StaticClass()->DefaultObject);

	return Default;
}

}


