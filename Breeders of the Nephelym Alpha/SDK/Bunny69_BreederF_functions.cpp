#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bunny69_BreederF.Bunny69_BreederF_C
// (None)

class UClass* UBunny69_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bunny69_BreederF_C");

	return Clss;
}


// Bunny69_BreederF_C Bunny69_BreederF.Default__Bunny69_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBunny69_BreederF_C* UBunny69_BreederF_C::GetDefaultObj()
{
	static class UBunny69_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBunny69_BreederF_C*>(UBunny69_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


