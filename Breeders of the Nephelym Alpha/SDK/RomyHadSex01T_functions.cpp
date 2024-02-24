#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyHadSex01T.RomyHadSex01T_C
// (None)

class UClass* URomyHadSex01T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyHadSex01T_C");

	return Clss;
}


// RomyHadSex01T_C RomyHadSex01T.Default__RomyHadSex01T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyHadSex01T_C* URomyHadSex01T_C::GetDefaultObj()
{
	static class URomyHadSex01T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyHadSex01T_C*>(URomyHadSex01T_C::StaticClass()->DefaultObject);

	return Default;
}

}


