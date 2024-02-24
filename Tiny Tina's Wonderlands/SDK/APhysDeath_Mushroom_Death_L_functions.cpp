#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass APhysDeath_Mushroom_Death_L.APhysDeath_Mushroom_Death_L_C
// (None)

class UClass* UAPhysDeath_Mushroom_Death_L_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("APhysDeath_Mushroom_Death_L_C");

	return Clss;
}


// APhysDeath_Mushroom_Death_L_C APhysDeath_Mushroom_Death_L.Default__APhysDeath_Mushroom_Death_L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAPhysDeath_Mushroom_Death_L_C* UAPhysDeath_Mushroom_Death_L_C::GetDefaultObj()
{
	static class UAPhysDeath_Mushroom_Death_L_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAPhysDeath_Mushroom_Death_L_C*>(UAPhysDeath_Mushroom_Death_L_C::StaticClass()->DefaultObject);

	return Default;
}

}


