#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyFingerF.RomyFingerF_C
// (None)

class UClass* URomyFingerF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyFingerF_C");

	return Clss;
}


// RomyFingerF_C RomyFingerF.Default__RomyFingerF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyFingerF_C* URomyFingerF_C::GetDefaultObj()
{
	static class URomyFingerF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyFingerF_C*>(URomyFingerF_C::StaticClass()->DefaultObject);

	return Default;
}

}


