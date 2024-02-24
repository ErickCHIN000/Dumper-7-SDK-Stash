#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CE_Wep_MagicSMG_PoisonSpreader.CE_Wep_MagicSMG_PoisonSpreader_C
// (None)

class UClass* UCE_Wep_MagicSMG_PoisonSpreader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CE_Wep_MagicSMG_PoisonSpreader_C");

	return Clss;
}


// CE_Wep_MagicSMG_PoisonSpreader_C CE_Wep_MagicSMG_PoisonSpreader.Default__CE_Wep_MagicSMG_PoisonSpreader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCE_Wep_MagicSMG_PoisonSpreader_C* UCE_Wep_MagicSMG_PoisonSpreader_C::GetDefaultObj()
{
	static class UCE_Wep_MagicSMG_PoisonSpreader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCE_Wep_MagicSMG_PoisonSpreader_C*>(UCE_Wep_MagicSMG_PoisonSpreader_C::StaticClass()->DefaultObject);

	return Default;
}

}


