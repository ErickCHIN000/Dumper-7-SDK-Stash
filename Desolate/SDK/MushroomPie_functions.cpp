#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MushroomPie.MushroomPie_C
// (Actor)

class UClass* AMushroomPie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MushroomPie_C");

	return Clss;
}


// MushroomPie_C MushroomPie.Default__MushroomPie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMushroomPie_C* AMushroomPie_C::GetDefaultObj()
{
	static class AMushroomPie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMushroomPie_C*>(AMushroomPie_C::StaticClass()->DefaultObject);

	return Default;
}

}


