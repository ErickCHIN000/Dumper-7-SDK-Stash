#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrapplingHook_Poison_2.GrapplingHook_Poison_2_C
// (Actor)

class UClass* AGrapplingHook_Poison_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrapplingHook_Poison_2_C");

	return Clss;
}


// GrapplingHook_Poison_2_C GrapplingHook_Poison_2.Default__GrapplingHook_Poison_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrapplingHook_Poison_2_C* AGrapplingHook_Poison_2_C::GetDefaultObj()
{
	static class AGrapplingHook_Poison_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrapplingHook_Poison_2_C*>(AGrapplingHook_Poison_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


