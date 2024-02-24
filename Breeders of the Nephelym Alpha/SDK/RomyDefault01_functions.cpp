#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyDefault01.RomyDefault01_C
// (None)

class UClass* URomyDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyDefault01_C");

	return Clss;
}


// RomyDefault01_C RomyDefault01.Default__RomyDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyDefault01_C* URomyDefault01_C::GetDefaultObj()
{
	static class URomyDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyDefault01_C*>(URomyDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


