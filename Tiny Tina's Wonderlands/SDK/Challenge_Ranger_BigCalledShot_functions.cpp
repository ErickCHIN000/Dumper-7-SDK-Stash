#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Ranger_BigCalledShot.Challenge_Ranger_BigCalledShot_C
// (None)

class UClass* UChallenge_Ranger_BigCalledShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Ranger_BigCalledShot_C");

	return Clss;
}


// Challenge_Ranger_BigCalledShot_C Challenge_Ranger_BigCalledShot.Default__Challenge_Ranger_BigCalledShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Ranger_BigCalledShot_C* UChallenge_Ranger_BigCalledShot_C::GetDefaultObj()
{
	static class UChallenge_Ranger_BigCalledShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Ranger_BigCalledShot_C*>(UChallenge_Ranger_BigCalledShot_C::StaticClass()->DefaultObject);

	return Default;
}

}


