#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass cshake_WalkShake_00.cshake_WalkShake_00_C
// (None)

class UClass* UCshake_WalkShake_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("cshake_WalkShake_00_C");

	return Clss;
}


// cshake_WalkShake_00_C cshake_WalkShake_00.Default__cshake_WalkShake_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCshake_WalkShake_00_C* UCshake_WalkShake_00_C::GetDefaultObj()
{
	static class UCshake_WalkShake_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCshake_WalkShake_00_C*>(UCshake_WalkShake_00_C::StaticClass()->DefaultObject);

	return Default;
}

}


