#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_MagicMissile_Ricochet.ElementalEffectCollection_MagicMissile_Ricochet_C
// (None)

class UClass* UElementalEffectCollection_MagicMissile_Ricochet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_MagicMissile_Ricochet_C");

	return Clss;
}


// ElementalEffectCollection_MagicMissile_Ricochet_C ElementalEffectCollection_MagicMissile_Ricochet.Default__ElementalEffectCollection_MagicMissile_Ricochet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_MagicMissile_Ricochet_C* UElementalEffectCollection_MagicMissile_Ricochet_C::GetDefaultObj()
{
	static class UElementalEffectCollection_MagicMissile_Ricochet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_MagicMissile_Ricochet_C*>(UElementalEffectCollection_MagicMissile_Ricochet_C::StaticClass()->DefaultObject);

	return Default;
}

}


