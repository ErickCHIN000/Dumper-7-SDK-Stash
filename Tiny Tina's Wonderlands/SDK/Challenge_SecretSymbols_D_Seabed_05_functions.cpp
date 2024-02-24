#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_SecretSymbols_D_Seabed_05.Challenge_SecretSymbols_D_Seabed_05_C
// (None)

class UClass* UChallenge_SecretSymbols_D_Seabed_05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_SecretSymbols_D_Seabed_05_C");

	return Clss;
}


// Challenge_SecretSymbols_D_Seabed_05_C Challenge_SecretSymbols_D_Seabed_05.Default__Challenge_SecretSymbols_D_Seabed_05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_SecretSymbols_D_Seabed_05_C* UChallenge_SecretSymbols_D_Seabed_05_C::GetDefaultObj()
{
	static class UChallenge_SecretSymbols_D_Seabed_05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_SecretSymbols_D_Seabed_05_C*>(UChallenge_SecretSymbols_D_Seabed_05_C::StaticClass()->DefaultObject);

	return Default;
}

}


