#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothLazySex.SlothLazySex_C
// (None)

class UClass* USlothLazySex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothLazySex_C");

	return Clss;
}


// SlothLazySex_C SlothLazySex.Default__SlothLazySex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothLazySex_C* USlothLazySex_C::GetDefaultObj()
{
	static class USlothLazySex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothLazySex_C*>(USlothLazySex_C::StaticClass()->DefaultObject);

	return Default;
}

}


