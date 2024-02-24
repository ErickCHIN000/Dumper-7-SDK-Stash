#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyDefault01_YourMusic_ToneDeaf.RomyDefault01_YourMusic_ToneDeaf_C
// (None)

class UClass* URomyDefault01_YourMusic_ToneDeaf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyDefault01_YourMusic_ToneDeaf_C");

	return Clss;
}


// RomyDefault01_YourMusic_ToneDeaf_C RomyDefault01_YourMusic_ToneDeaf.Default__RomyDefault01_YourMusic_ToneDeaf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyDefault01_YourMusic_ToneDeaf_C* URomyDefault01_YourMusic_ToneDeaf_C::GetDefaultObj()
{
	static class URomyDefault01_YourMusic_ToneDeaf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyDefault01_YourMusic_ToneDeaf_C*>(URomyDefault01_YourMusic_ToneDeaf_C::StaticClass()->DefaultObject);

	return Default;
}

}


