#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrapplingHook.GrapplingHook_C
// (Actor)

class UClass* AGrapplingHook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrapplingHook_C");

	return Clss;
}


// GrapplingHook_C GrapplingHook.Default__GrapplingHook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrapplingHook_C* AGrapplingHook_C::GetDefaultObj()
{
	static class AGrapplingHook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrapplingHook_C*>(AGrapplingHook_C::StaticClass()->DefaultObject);

	return Default;
}

}


