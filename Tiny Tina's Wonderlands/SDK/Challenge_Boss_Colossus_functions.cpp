#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Boss_Colossus.Challenge_Boss_Colossus_C
// (None)

class UClass* UChallenge_Boss_Colossus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Boss_Colossus_C");

	return Clss;
}


// Challenge_Boss_Colossus_C Challenge_Boss_Colossus.Default__Challenge_Boss_Colossus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Boss_Colossus_C* UChallenge_Boss_Colossus_C::GetDefaultObj()
{
	static class UChallenge_Boss_Colossus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Boss_Colossus_C*>(UChallenge_Boss_Colossus_C::StaticClass()->DefaultObject);

	return Default;
}

}


