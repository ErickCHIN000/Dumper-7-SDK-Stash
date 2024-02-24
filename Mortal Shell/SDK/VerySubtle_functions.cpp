#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VerySubtle.VerySubtle_C
// (None)

class UClass* UVerySubtle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerySubtle_C");

	return Clss;
}


// VerySubtle_C VerySubtle.Default__VerySubtle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerySubtle_C* UVerySubtle_C::GetDefaultObj()
{
	static class UVerySubtle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerySubtle_C*>(UVerySubtle_C::StaticClass()->DefaultObject);

	return Default;
}

}


