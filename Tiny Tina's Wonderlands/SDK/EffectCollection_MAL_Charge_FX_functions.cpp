#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_MAL_Charge_FX.EffectCollection_MAL_Charge_FX_C
// (None)

class UClass* UEffectCollection_MAL_Charge_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_MAL_Charge_FX_C");

	return Clss;
}


// EffectCollection_MAL_Charge_FX_C EffectCollection_MAL_Charge_FX.Default__EffectCollection_MAL_Charge_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_MAL_Charge_FX_C* UEffectCollection_MAL_Charge_FX_C::GetDefaultObj()
{
	static class UEffectCollection_MAL_Charge_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_MAL_Charge_FX_C*>(UEffectCollection_MAL_Charge_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


