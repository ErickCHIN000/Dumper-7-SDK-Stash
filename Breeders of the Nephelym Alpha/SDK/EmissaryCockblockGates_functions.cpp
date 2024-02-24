#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryCockblockGates.EmissaryCockblockGates_C
// (None)

class UClass* UEmissaryCockblockGates_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryCockblockGates_C");

	return Clss;
}


// EmissaryCockblockGates_C EmissaryCockblockGates.Default__EmissaryCockblockGates_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryCockblockGates_C* UEmissaryCockblockGates_C::GetDefaultObj()
{
	static class UEmissaryCockblockGates_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryCockblockGates_C*>(UEmissaryCockblockGates_C::StaticClass()->DefaultObject);

	return Default;
}

}


