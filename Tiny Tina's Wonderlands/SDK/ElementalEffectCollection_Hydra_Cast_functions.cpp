#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Hydra_Cast.ElementalEffectCollection_Hydra_Cast_C
// (None)

class UClass* UElementalEffectCollection_Hydra_Cast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Hydra_Cast_C");

	return Clss;
}


// ElementalEffectCollection_Hydra_Cast_C ElementalEffectCollection_Hydra_Cast.Default__ElementalEffectCollection_Hydra_Cast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Hydra_Cast_C* UElementalEffectCollection_Hydra_Cast_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Hydra_Cast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Hydra_Cast_C*>(UElementalEffectCollection_Hydra_Cast_C::StaticClass()->DefaultObject);

	return Default;
}

}


