#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_SecretSymbols_D_Mushroom_01.Challenge_SecretSymbols_D_Mushroom_01_C
// (None)

class UClass* UChallenge_SecretSymbols_D_Mushroom_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_SecretSymbols_D_Mushroom_01_C");

	return Clss;
}


// Challenge_SecretSymbols_D_Mushroom_01_C Challenge_SecretSymbols_D_Mushroom_01.Default__Challenge_SecretSymbols_D_Mushroom_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_SecretSymbols_D_Mushroom_01_C* UChallenge_SecretSymbols_D_Mushroom_01_C::GetDefaultObj()
{
	static class UChallenge_SecretSymbols_D_Mushroom_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_SecretSymbols_D_Mushroom_01_C*>(UChallenge_SecretSymbols_D_Mushroom_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


