#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass APhysDeath_Mushroom_Death_F.APhysDeath_Mushroom_Death_F_C
// (None)

class UClass* UAPhysDeath_Mushroom_Death_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("APhysDeath_Mushroom_Death_F_C");

	return Clss;
}


// APhysDeath_Mushroom_Death_F_C APhysDeath_Mushroom_Death_F.Default__APhysDeath_Mushroom_Death_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAPhysDeath_Mushroom_Death_F_C* UAPhysDeath_Mushroom_Death_F_C::GetDefaultObj()
{
	static class UAPhysDeath_Mushroom_Death_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAPhysDeath_Mushroom_Death_F_C*>(UAPhysDeath_Mushroom_Death_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


