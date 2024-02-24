#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Fissure_SelfCast.ElementalEffectCollection_Fissure_SelfCast_C
// (None)

class UClass* UElementalEffectCollection_Fissure_SelfCast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Fissure_SelfCast_C");

	return Clss;
}


// ElementalEffectCollection_Fissure_SelfCast_C ElementalEffectCollection_Fissure_SelfCast.Default__ElementalEffectCollection_Fissure_SelfCast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Fissure_SelfCast_C* UElementalEffectCollection_Fissure_SelfCast_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Fissure_SelfCast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Fissure_SelfCast_C*>(UElementalEffectCollection_Fissure_SelfCast_C::StaticClass()->DefaultObject);

	return Default;
}

}


