#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat3.Hat3_C
// (Actor)

class UClass* AHat3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat3_C");

	return Clss;
}


// Hat3_C Hat3.Default__Hat3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat3_C* AHat3_C::GetDefaultObj()
{
	static class AHat3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat3_C*>(AHat3_C::StaticClass()->DefaultObject);

	return Default;
}

}


