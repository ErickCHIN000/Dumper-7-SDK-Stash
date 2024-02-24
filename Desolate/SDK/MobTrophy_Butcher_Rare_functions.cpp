#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MobTrophy_Butcher_Rare.MobTrophy_Butcher_Rare_C
// (Actor)

class UClass* AMobTrophy_Butcher_Rare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MobTrophy_Butcher_Rare_C");

	return Clss;
}


// MobTrophy_Butcher_Rare_C MobTrophy_Butcher_Rare.Default__MobTrophy_Butcher_Rare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMobTrophy_Butcher_Rare_C* AMobTrophy_Butcher_Rare_C::GetDefaultObj()
{
	static class AMobTrophy_Butcher_Rare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMobTrophy_Butcher_Rare_C*>(AMobTrophy_Butcher_Rare_C::StaticClass()->DefaultObject);

	return Default;
}

}


