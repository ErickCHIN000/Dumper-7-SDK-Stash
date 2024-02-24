#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyDefault01_UpHere.RomyDefault01_UpHere_C
// (None)

class UClass* URomyDefault01_UpHere_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyDefault01_UpHere_C");

	return Clss;
}


// RomyDefault01_UpHere_C RomyDefault01_UpHere.Default__RomyDefault01_UpHere_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyDefault01_UpHere_C* URomyDefault01_UpHere_C::GetDefaultObj()
{
	static class URomyDefault01_UpHere_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyDefault01_UpHere_C*>(URomyDefault01_UpHere_C::StaticClass()->DefaultObject);

	return Default;
}

}


