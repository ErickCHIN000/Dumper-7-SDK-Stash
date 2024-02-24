#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Fireball_BigMainBody_Audio.ElementalEffectCollection_Fireball_BigMainBody_Audio_C
// (None)

class UClass* UElementalEffectCollection_Fireball_BigMainBody_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Fireball_BigMainBody_Audio_C");

	return Clss;
}


// ElementalEffectCollection_Fireball_BigMainBody_Audio_C ElementalEffectCollection_Fireball_BigMainBody_Audio.Default__ElementalEffectCollection_Fireball_BigMainBody_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Fireball_BigMainBody_Audio_C* UElementalEffectCollection_Fireball_BigMainBody_Audio_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Fireball_BigMainBody_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Fireball_BigMainBody_Audio_C*>(UElementalEffectCollection_Fireball_BigMainBody_Audio_C::StaticClass()->DefaultObject);

	return Default;
}

}


