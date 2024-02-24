#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass APhysDeath_Mushroom_Death_B.APhysDeath_Mushroom_Death_B_C
// (None)

class UClass* UAPhysDeath_Mushroom_Death_B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("APhysDeath_Mushroom_Death_B_C");

	return Clss;
}


// APhysDeath_Mushroom_Death_B_C APhysDeath_Mushroom_Death_B.Default__APhysDeath_Mushroom_Death_B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAPhysDeath_Mushroom_Death_B_C* UAPhysDeath_Mushroom_Death_B_C::GetDefaultObj()
{
	static class UAPhysDeath_Mushroom_Death_B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAPhysDeath_Mushroom_Death_B_C*>(UAPhysDeath_Mushroom_Death_B_C::StaticClass()->DefaultObject);

	return Default;
}

}


