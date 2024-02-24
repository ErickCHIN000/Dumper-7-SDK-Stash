#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrapplingHook_Bleed2.GrapplingHook_Bleed2_C
// (Actor)

class UClass* AGrapplingHook_Bleed2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrapplingHook_Bleed2_C");

	return Clss;
}


// GrapplingHook_Bleed2_C GrapplingHook_Bleed2.Default__GrapplingHook_Bleed2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrapplingHook_Bleed2_C* AGrapplingHook_Bleed2_C::GetDefaultObj()
{
	static class AGrapplingHook_Bleed2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrapplingHook_Bleed2_C*>(AGrapplingHook_Bleed2_C::StaticClass()->DefaultObject);

	return Default;
}

}


