#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothSevenSexy.SlothSevenSexy_C
// (None)

class UClass* USlothSevenSexy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothSevenSexy_C");

	return Clss;
}


// SlothSevenSexy_C SlothSevenSexy.Default__SlothSevenSexy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothSevenSexy_C* USlothSevenSexy_C::GetDefaultObj()
{
	static class USlothSevenSexy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothSevenSexy_C*>(USlothSevenSexy_C::StaticClass()->DefaultObject);

	return Default;
}

}


