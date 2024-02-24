#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaHadSex01.NeelaHadSex01_C
// (None)

class UClass* UNeelaHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaHadSex01_C");

	return Clss;
}


// NeelaHadSex01_C NeelaHadSex01.Default__NeelaHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaHadSex01_C* UNeelaHadSex01_C::GetDefaultObj()
{
	static class UNeelaHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaHadSex01_C*>(UNeelaHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


