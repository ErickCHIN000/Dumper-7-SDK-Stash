#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01_Leylanna.EmissaryDefault01_Leylanna_C
// (None)

class UClass* UEmissaryDefault01_Leylanna_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_Leylanna_C");

	return Clss;
}


// EmissaryDefault01_Leylanna_C EmissaryDefault01_Leylanna.Default__EmissaryDefault01_Leylanna_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_Leylanna_C* UEmissaryDefault01_Leylanna_C::GetDefaultObj()
{
	static class UEmissaryDefault01_Leylanna_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_Leylanna_C*>(UEmissaryDefault01_Leylanna_C::StaticClass()->DefaultObject);

	return Default;
}

}


