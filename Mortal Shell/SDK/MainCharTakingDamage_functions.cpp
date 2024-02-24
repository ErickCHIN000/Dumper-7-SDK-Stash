#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainCharTakingDamage.MainCharTakingDamage_C
// (None)

class UClass* UMainCharTakingDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainCharTakingDamage_C");

	return Clss;
}


// MainCharTakingDamage_C MainCharTakingDamage.Default__MainCharTakingDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainCharTakingDamage_C* UMainCharTakingDamage_C::GetDefaultObj()
{
	static class UMainCharTakingDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainCharTakingDamage_C*>(UMainCharTakingDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


