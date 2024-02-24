#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpeedBonus.GE_SpeedBonus_C
// (None)

class UClass* UGE_SpeedBonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpeedBonus_C");

	return Clss;
}


// GE_SpeedBonus_C GE_SpeedBonus.Default__GE_SpeedBonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpeedBonus_C* UGE_SpeedBonus_C::GetDefaultObj()
{
	static class UGE_SpeedBonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpeedBonus_C*>(UGE_SpeedBonus_C::StaticClass()->DefaultObject);

	return Default;
}

}


