#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MobTrophy_Grutch_Rare.MobTrophy_Grutch_Rare_C
// (Actor)

class UClass* AMobTrophy_Grutch_Rare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MobTrophy_Grutch_Rare_C");

	return Clss;
}


// MobTrophy_Grutch_Rare_C MobTrophy_Grutch_Rare.Default__MobTrophy_Grutch_Rare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMobTrophy_Grutch_Rare_C* AMobTrophy_Grutch_Rare_C::GetDefaultObj()
{
	static class AMobTrophy_Grutch_Rare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMobTrophy_Grutch_Rare_C*>(AMobTrophy_Grutch_Rare_C::StaticClass()->DefaultObject);

	return Default;
}

}


