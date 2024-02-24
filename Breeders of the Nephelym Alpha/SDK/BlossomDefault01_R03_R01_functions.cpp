#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlossomDefault01_R03_R01.BlossomDefault01_R03_R01_C
// (None)

class UClass* UBlossomDefault01_R03_R01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlossomDefault01_R03_R01_C");

	return Clss;
}


// BlossomDefault01_R03_R01_C BlossomDefault01_R03_R01.Default__BlossomDefault01_R03_R01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlossomDefault01_R03_R01_C* UBlossomDefault01_R03_R01_C::GetDefaultObj()
{
	static class UBlossomDefault01_R03_R01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlossomDefault01_R03_R01_C*>(UBlossomDefault01_R03_R01_C::StaticClass()->DefaultObject);

	return Default;
}

}


