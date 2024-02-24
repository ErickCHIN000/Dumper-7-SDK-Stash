#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Legendary_Twister_Cast.ElementalEffectCollection_Legendary_Twister_Cast_C
// (None)

class UClass* UElementalEffectCollection_Legendary_Twister_Cast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Legendary_Twister_Cast_C");

	return Clss;
}


// ElementalEffectCollection_Legendary_Twister_Cast_C ElementalEffectCollection_Legendary_Twister_Cast.Default__ElementalEffectCollection_Legendary_Twister_Cast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Legendary_Twister_Cast_C* UElementalEffectCollection_Legendary_Twister_Cast_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Legendary_Twister_Cast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Legendary_Twister_Cast_C*>(UElementalEffectCollection_Legendary_Twister_Cast_C::StaticClass()->DefaultObject);

	return Default;
}

}


