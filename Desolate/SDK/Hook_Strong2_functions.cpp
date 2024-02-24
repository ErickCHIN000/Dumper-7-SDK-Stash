#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hook_Strong2.Hook_Strong2_C
// (Actor)

class UClass* AHook_Strong2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hook_Strong2_C");

	return Clss;
}


// Hook_Strong2_C Hook_Strong2.Default__Hook_Strong2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHook_Strong2_C* AHook_Strong2_C::GetDefaultObj()
{
	static class AHook_Strong2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHook_Strong2_C*>(AHook_Strong2_C::StaticClass()->DefaultObject);

	return Default;
}

}


