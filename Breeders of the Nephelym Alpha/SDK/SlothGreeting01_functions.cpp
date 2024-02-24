#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothGreeting01.SlothGreeting01_C
// (None)

class UClass* USlothGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothGreeting01_C");

	return Clss;
}


// SlothGreeting01_C SlothGreeting01.Default__SlothGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothGreeting01_C* USlothGreeting01_C::GetDefaultObj()
{
	static class USlothGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothGreeting01_C*>(USlothGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


