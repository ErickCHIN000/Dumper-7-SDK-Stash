#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Deadeye_04_ReloadSpeed.Prestige_Deadeye_04_ReloadSpeed_C
// (None)

class UClass* UPrestige_Deadeye_04_ReloadSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Deadeye_04_ReloadSpeed_C");

	return Clss;
}


// Prestige_Deadeye_04_ReloadSpeed_C Prestige_Deadeye_04_ReloadSpeed.Default__Prestige_Deadeye_04_ReloadSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Deadeye_04_ReloadSpeed_C* UPrestige_Deadeye_04_ReloadSpeed_C::GetDefaultObj()
{
	static class UPrestige_Deadeye_04_ReloadSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Deadeye_04_ReloadSpeed_C*>(UPrestige_Deadeye_04_ReloadSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


