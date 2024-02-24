#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hook_Poison2.Hook_Poison2_C
// (Actor)

class UClass* AHook_Poison2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hook_Poison2_C");

	return Clss;
}


// Hook_Poison2_C Hook_Poison2.Default__Hook_Poison2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHook_Poison2_C* AHook_Poison2_C::GetDefaultObj()
{
	static class AHook_Poison2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHook_Poison2_C*>(AHook_Poison2_C::StaticClass()->DefaultObject);

	return Default;
}

}


