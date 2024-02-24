#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Mission_Side_OW_AB2_MiracleGrow.Challenge_Mission_Side_OW_AB2_MiracleGrow_C
// (None)

class UClass* UChallenge_Mission_Side_OW_AB2_MiracleGrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Mission_Side_OW_AB2_MiracleGrow_C");

	return Clss;
}


// Challenge_Mission_Side_OW_AB2_MiracleGrow_C Challenge_Mission_Side_OW_AB2_MiracleGrow.Default__Challenge_Mission_Side_OW_AB2_MiracleGrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Mission_Side_OW_AB2_MiracleGrow_C* UChallenge_Mission_Side_OW_AB2_MiracleGrow_C::GetDefaultObj()
{
	static class UChallenge_Mission_Side_OW_AB2_MiracleGrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Mission_Side_OW_AB2_MiracleGrow_C*>(UChallenge_Mission_Side_OW_AB2_MiracleGrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


