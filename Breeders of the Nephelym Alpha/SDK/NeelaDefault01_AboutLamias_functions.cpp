#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaDefault01_AboutLamias.NeelaDefault01_AboutLamias_C
// (None)

class UClass* UNeelaDefault01_AboutLamias_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaDefault01_AboutLamias_C");

	return Clss;
}


// NeelaDefault01_AboutLamias_C NeelaDefault01_AboutLamias.Default__NeelaDefault01_AboutLamias_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaDefault01_AboutLamias_C* UNeelaDefault01_AboutLamias_C::GetDefaultObj()
{
	static class UNeelaDefault01_AboutLamias_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaDefault01_AboutLamias_C*>(UNeelaDefault01_AboutLamias_C::StaticClass()->DefaultObject);

	return Default;
}

}


