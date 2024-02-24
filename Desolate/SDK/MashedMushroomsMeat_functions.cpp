#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MashedMushroomsMeat.MashedMushroomsMeat_C
// (Actor)

class UClass* AMashedMushroomsMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MashedMushroomsMeat_C");

	return Clss;
}


// MashedMushroomsMeat_C MashedMushroomsMeat.Default__MashedMushroomsMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMashedMushroomsMeat_C* AMashedMushroomsMeat_C::GetDefaultObj()
{
	static class AMashedMushroomsMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMashedMushroomsMeat_C*>(AMashedMushroomsMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


