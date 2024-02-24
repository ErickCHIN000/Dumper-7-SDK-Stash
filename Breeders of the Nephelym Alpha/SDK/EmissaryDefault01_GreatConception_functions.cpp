#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01_GreatConception.EmissaryDefault01_GreatConception_C
// (None)

class UClass* UEmissaryDefault01_GreatConception_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_GreatConception_C");

	return Clss;
}


// EmissaryDefault01_GreatConception_C EmissaryDefault01_GreatConception.Default__EmissaryDefault01_GreatConception_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_GreatConception_C* UEmissaryDefault01_GreatConception_C::GetDefaultObj()
{
	static class UEmissaryDefault01_GreatConception_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_GreatConception_C*>(UEmissaryDefault01_GreatConception_C::StaticClass()->DefaultObject);

	return Default;
}

}


