#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01.EmissaryDefault01_C
// (None)

class UClass* UEmissaryDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_C");

	return Clss;
}


// EmissaryDefault01_C EmissaryDefault01.Default__EmissaryDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_C* UEmissaryDefault01_C::GetDefaultObj()
{
	static class UEmissaryDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_C*>(UEmissaryDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


