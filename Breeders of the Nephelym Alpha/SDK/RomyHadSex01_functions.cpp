#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyHadSex01.RomyHadSex01_C
// (None)

class UClass* URomyHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyHadSex01_C");

	return Clss;
}


// RomyHadSex01_C RomyHadSex01.Default__RomyHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyHadSex01_C* URomyHadSex01_C::GetDefaultObj()
{
	static class URomyHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyHadSex01_C*>(URomyHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


