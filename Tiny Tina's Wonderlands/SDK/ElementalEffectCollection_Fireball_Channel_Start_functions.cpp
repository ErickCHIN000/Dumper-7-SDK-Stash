#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Fireball_Channel_Start.ElementalEffectCollection_Fireball_Channel_Start_C
// (None)

class UClass* UElementalEffectCollection_Fireball_Channel_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Fireball_Channel_Start_C");

	return Clss;
}


// ElementalEffectCollection_Fireball_Channel_Start_C ElementalEffectCollection_Fireball_Channel_Start.Default__ElementalEffectCollection_Fireball_Channel_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Fireball_Channel_Start_C* UElementalEffectCollection_Fireball_Channel_Start_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Fireball_Channel_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Fireball_Channel_Start_C*>(UElementalEffectCollection_Fireball_Channel_Start_C::StaticClass()->DefaultObject);

	return Default;
}

}

