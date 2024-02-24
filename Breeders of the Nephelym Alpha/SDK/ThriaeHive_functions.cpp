#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThriaeHive.ThriaeHive_C
// (None)

class UClass* UThriaeHive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThriaeHive_C");

	return Clss;
}


// ThriaeHive_C ThriaeHive.Default__ThriaeHive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThriaeHive_C* UThriaeHive_C::GetDefaultObj()
{
	static class UThriaeHive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThriaeHive_C*>(UThriaeHive_C::StaticClass()->DefaultObject);

	return Default;
}

}


