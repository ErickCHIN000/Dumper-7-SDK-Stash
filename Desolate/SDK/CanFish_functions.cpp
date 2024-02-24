#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CanFish.CanFish_C
// (Actor)

class UClass* ACanFish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanFish_C");

	return Clss;
}


// CanFish_C CanFish.Default__CanFish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACanFish_C* ACanFish_C::GetDefaultObj()
{
	static class ACanFish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACanFish_C*>(ACanFish_C::StaticClass()->DefaultObject);

	return Default;
}

}


