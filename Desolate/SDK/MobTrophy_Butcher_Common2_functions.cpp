#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MobTrophy_Butcher_Common2.MobTrophy_Butcher_Common2_C
// (Actor)

class UClass* AMobTrophy_Butcher_Common2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MobTrophy_Butcher_Common2_C");

	return Clss;
}


// MobTrophy_Butcher_Common2_C MobTrophy_Butcher_Common2.Default__MobTrophy_Butcher_Common2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMobTrophy_Butcher_Common2_C* AMobTrophy_Butcher_Common2_C::GetDefaultObj()
{
	static class AMobTrophy_Butcher_Common2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMobTrophy_Butcher_Common2_C*>(AMobTrophy_Butcher_Common2_C::StaticClass()->DefaultObject);

	return Default;
}

}


