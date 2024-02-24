#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothLazySex_BreederT.SlothLazySex_BreederT_C
// (None)

class UClass* USlothLazySex_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothLazySex_BreederT_C");

	return Clss;
}


// SlothLazySex_BreederT_C SlothLazySex_BreederT.Default__SlothLazySex_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothLazySex_BreederT_C* USlothLazySex_BreederT_C::GetDefaultObj()
{
	static class USlothLazySex_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothLazySex_BreederT_C*>(USlothLazySex_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


