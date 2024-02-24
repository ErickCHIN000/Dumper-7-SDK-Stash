#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MushroomStew.MushroomStew_C
// (Actor)

class UClass* AMushroomStew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MushroomStew_C");

	return Clss;
}


// MushroomStew_C MushroomStew.Default__MushroomStew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMushroomStew_C* AMushroomStew_C::GetDefaultObj()
{
	static class AMushroomStew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMushroomStew_C*>(AMushroomStew_C::StaticClass()->DefaultObject);

	return Default;
}

}


