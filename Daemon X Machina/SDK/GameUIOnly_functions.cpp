#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GameUIOnly.GameUIOnly_C
// (Actor)

class UClass* AGameUIOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameUIOnly_C");

	return Clss;
}


// GameUIOnly_C GameUIOnly.Default__GameUIOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGameUIOnly_C* AGameUIOnly_C::GetDefaultObj()
{
	static class AGameUIOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameUIOnly_C*>(AGameUIOnly_C::StaticClass()->DefaultObject);

	return Default;
}

}


