#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MobTrophy_Dorg_Common.MobTrophy_Dorg_Common_C
// (Actor)

class UClass* AMobTrophy_Dorg_Common_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MobTrophy_Dorg_Common_C");

	return Clss;
}


// MobTrophy_Dorg_Common_C MobTrophy_Dorg_Common.Default__MobTrophy_Dorg_Common_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMobTrophy_Dorg_Common_C* AMobTrophy_Dorg_Common_C::GetDefaultObj()
{
	static class AMobTrophy_Dorg_Common_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMobTrophy_Dorg_Common_C*>(AMobTrophy_Dorg_Common_C::StaticClass()->DefaultObject);

	return Default;
}

}


