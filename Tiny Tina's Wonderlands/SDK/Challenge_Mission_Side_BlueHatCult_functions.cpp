#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Mission_Side_BlueHatCult.Challenge_Mission_Side_BlueHatCult_C
// (None)

class UClass* UChallenge_Mission_Side_BlueHatCult_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Mission_Side_BlueHatCult_C");

	return Clss;
}


// Challenge_Mission_Side_BlueHatCult_C Challenge_Mission_Side_BlueHatCult.Default__Challenge_Mission_Side_BlueHatCult_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Mission_Side_BlueHatCult_C* UChallenge_Mission_Side_BlueHatCult_C::GetDefaultObj()
{
	static class UChallenge_Mission_Side_BlueHatCult_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Mission_Side_BlueHatCult_C*>(UChallenge_Mission_Side_BlueHatCult_C::StaticClass()->DefaultObject);

	return Default;
}

}


