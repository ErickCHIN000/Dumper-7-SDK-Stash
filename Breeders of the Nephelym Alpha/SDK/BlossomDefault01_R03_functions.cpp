#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlossomDefault01_R03.BlossomDefault01_R03_C
// (None)

class UClass* UBlossomDefault01_R03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlossomDefault01_R03_C");

	return Clss;
}


// BlossomDefault01_R03_C BlossomDefault01_R03.Default__BlossomDefault01_R03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlossomDefault01_R03_C* UBlossomDefault01_R03_C::GetDefaultObj()
{
	static class UBlossomDefault01_R03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlossomDefault01_R03_C*>(UBlossomDefault01_R03_C::StaticClass()->DefaultObject);

	return Default;
}

}


