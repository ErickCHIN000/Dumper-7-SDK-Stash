#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlossomGreeting01.BlossomGreeting01_C
// (None)

class UClass* UBlossomGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlossomGreeting01_C");

	return Clss;
}


// BlossomGreeting01_C BlossomGreeting01.Default__BlossomGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlossomGreeting01_C* UBlossomGreeting01_C::GetDefaultObj()
{
	static class UBlossomGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlossomGreeting01_C*>(UBlossomGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


