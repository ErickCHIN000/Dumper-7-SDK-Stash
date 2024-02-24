#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlossomDefault01.BlossomDefault01_C
// (None)

class UClass* UBlossomDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlossomDefault01_C");

	return Clss;
}


// BlossomDefault01_C BlossomDefault01.Default__BlossomDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlossomDefault01_C* UBlossomDefault01_C::GetDefaultObj()
{
	static class UBlossomDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlossomDefault01_C*>(UBlossomDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


