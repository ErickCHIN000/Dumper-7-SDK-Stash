#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bunny69F.Bunny69F_C
// (None)

class UClass* UBunny69F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bunny69F_C");

	return Clss;
}


// Bunny69F_C Bunny69F.Default__Bunny69F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBunny69F_C* UBunny69F_C::GetDefaultObj()
{
	static class UBunny69F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBunny69F_C*>(UBunny69F_C::StaticClass()->DefaultObject);

	return Default;
}

}


