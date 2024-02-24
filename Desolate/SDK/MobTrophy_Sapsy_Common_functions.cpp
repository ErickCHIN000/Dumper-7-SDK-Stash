#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MobTrophy_Sapsy_Common.MobTrophy_Sapsy_Common_C
// (Actor)

class UClass* AMobTrophy_Sapsy_Common_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MobTrophy_Sapsy_Common_C");

	return Clss;
}


// MobTrophy_Sapsy_Common_C MobTrophy_Sapsy_Common.Default__MobTrophy_Sapsy_Common_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMobTrophy_Sapsy_Common_C* AMobTrophy_Sapsy_Common_C::GetDefaultObj()
{
	static class AMobTrophy_Sapsy_Common_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMobTrophy_Sapsy_Common_C*>(AMobTrophy_Sapsy_Common_C::StaticClass()->DefaultObject);

	return Default;
}

}


