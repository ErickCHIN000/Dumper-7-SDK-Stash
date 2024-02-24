#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01_IncreaseWorldLevel.EmissaryDefault01_IncreaseWorldLevel_C
// (None)

class UClass* UEmissaryDefault01_IncreaseWorldLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_IncreaseWorldLevel_C");

	return Clss;
}


// EmissaryDefault01_IncreaseWorldLevel_C EmissaryDefault01_IncreaseWorldLevel.Default__EmissaryDefault01_IncreaseWorldLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_IncreaseWorldLevel_C* UEmissaryDefault01_IncreaseWorldLevel_C::GetDefaultObj()
{
	static class UEmissaryDefault01_IncreaseWorldLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_IncreaseWorldLevel_C*>(UEmissaryDefault01_IncreaseWorldLevel_C::StaticClass()->DefaultObject);

	return Default;
}

}


