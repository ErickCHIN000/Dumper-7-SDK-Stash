#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_HydraFade_Shock.BP_CE_HydraFade_Shock_C
// (None)

class UClass* UBP_CE_HydraFade_Shock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_HydraFade_Shock_C");

	return Clss;
}


// BP_CE_HydraFade_Shock_C BP_CE_HydraFade_Shock.Default__BP_CE_HydraFade_Shock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_HydraFade_Shock_C* UBP_CE_HydraFade_Shock_C::GetDefaultObj()
{
	static class UBP_CE_HydraFade_Shock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_HydraFade_Shock_C*>(UBP_CE_HydraFade_Shock_C::StaticClass()->DefaultObject);

	return Default;
}

}


