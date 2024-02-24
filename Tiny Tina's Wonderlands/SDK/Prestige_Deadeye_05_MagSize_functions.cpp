#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Deadeye_05_MagSize.Prestige_Deadeye_05_MagSize_C
// (None)

class UClass* UPrestige_Deadeye_05_MagSize_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Deadeye_05_MagSize_C");

	return Clss;
}


// Prestige_Deadeye_05_MagSize_C Prestige_Deadeye_05_MagSize.Default__Prestige_Deadeye_05_MagSize_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Deadeye_05_MagSize_C* UPrestige_Deadeye_05_MagSize_C::GetDefaultObj()
{
	static class UPrestige_Deadeye_05_MagSize_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Deadeye_05_MagSize_C*>(UPrestige_Deadeye_05_MagSize_C::StaticClass()->DefaultObject);

	return Default;
}

}


