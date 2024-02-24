#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass APhysDeath_Mushroom_Death_R.APhysDeath_Mushroom_Death_R_C
// (None)

class UClass* UAPhysDeath_Mushroom_Death_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("APhysDeath_Mushroom_Death_R_C");

	return Clss;
}


// APhysDeath_Mushroom_Death_R_C APhysDeath_Mushroom_Death_R.Default__APhysDeath_Mushroom_Death_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAPhysDeath_Mushroom_Death_R_C* UAPhysDeath_Mushroom_Death_R_C::GetDefaultObj()
{
	static class UAPhysDeath_Mushroom_Death_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAPhysDeath_Mushroom_Death_R_C*>(UAPhysDeath_Mushroom_Death_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


