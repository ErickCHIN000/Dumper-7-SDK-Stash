#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScoutFP_ShakePitQuest.ScoutFP_ShakePitQuest_C
// (None)

class UClass* UScoutFP_ShakePitQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoutFP_ShakePitQuest_C");

	return Clss;
}


// ScoutFP_ShakePitQuest_C ScoutFP_ShakePitQuest.Default__ScoutFP_ShakePitQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoutFP_ShakePitQuest_C* UScoutFP_ShakePitQuest_C::GetDefaultObj()
{
	static class UScoutFP_ShakePitQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoutFP_ShakePitQuest_C*>(UScoutFP_ShakePitQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


