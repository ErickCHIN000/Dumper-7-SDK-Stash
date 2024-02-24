#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlossomDefault01_R02.BlossomDefault01_R02_C
// (None)

class UClass* UBlossomDefault01_R02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlossomDefault01_R02_C");

	return Clss;
}


// BlossomDefault01_R02_C BlossomDefault01_R02.Default__BlossomDefault01_R02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlossomDefault01_R02_C* UBlossomDefault01_R02_C::GetDefaultObj()
{
	static class UBlossomDefault01_R02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlossomDefault01_R02_C*>(UBlossomDefault01_R02_C::StaticClass()->DefaultObject);

	return Default;
}

}


