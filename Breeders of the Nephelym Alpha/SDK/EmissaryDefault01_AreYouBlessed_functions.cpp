#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01_AreYouBlessed.EmissaryDefault01_AreYouBlessed_C
// (None)

class UClass* UEmissaryDefault01_AreYouBlessed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_AreYouBlessed_C");

	return Clss;
}


// EmissaryDefault01_AreYouBlessed_C EmissaryDefault01_AreYouBlessed.Default__EmissaryDefault01_AreYouBlessed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_AreYouBlessed_C* UEmissaryDefault01_AreYouBlessed_C::GetDefaultObj()
{
	static class UEmissaryDefault01_AreYouBlessed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_AreYouBlessed_C*>(UEmissaryDefault01_AreYouBlessed_C::StaticClass()->DefaultObject);

	return Default;
}

}


