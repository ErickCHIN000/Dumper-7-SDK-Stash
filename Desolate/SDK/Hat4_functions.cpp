#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat4.Hat4_C
// (Actor)

class UClass* AHat4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat4_C");

	return Clss;
}


// Hat4_C Hat4.Default__Hat4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat4_C* AHat4_C::GetDefaultObj()
{
	static class AHat4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat4_C*>(AHat4_C::StaticClass()->DefaultObject);

	return Default;
}

}


