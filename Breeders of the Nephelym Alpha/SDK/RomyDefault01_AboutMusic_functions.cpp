#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyDefault01_AboutMusic.RomyDefault01_AboutMusic_C
// (None)

class UClass* URomyDefault01_AboutMusic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyDefault01_AboutMusic_C");

	return Clss;
}


// RomyDefault01_AboutMusic_C RomyDefault01_AboutMusic.Default__RomyDefault01_AboutMusic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyDefault01_AboutMusic_C* URomyDefault01_AboutMusic_C::GetDefaultObj()
{
	static class URomyDefault01_AboutMusic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyDefault01_AboutMusic_C*>(URomyDefault01_AboutMusic_C::StaticClass()->DefaultObject);

	return Default;
}

}


