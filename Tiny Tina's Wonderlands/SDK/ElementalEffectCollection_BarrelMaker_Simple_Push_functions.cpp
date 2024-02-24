#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_BarrelMaker_Simple_Push.ElementalEffectCollection_BarrelMaker_Simple_Push_C
// (None)

class UClass* UElementalEffectCollection_BarrelMaker_Simple_Push_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_BarrelMaker_Simple_Push_C");

	return Clss;
}


// ElementalEffectCollection_BarrelMaker_Simple_Push_C ElementalEffectCollection_BarrelMaker_Simple_Push.Default__ElementalEffectCollection_BarrelMaker_Simple_Push_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_BarrelMaker_Simple_Push_C* UElementalEffectCollection_BarrelMaker_Simple_Push_C::GetDefaultObj()
{
	static class UElementalEffectCollection_BarrelMaker_Simple_Push_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_BarrelMaker_Simple_Push_C*>(UElementalEffectCollection_BarrelMaker_Simple_Push_C::StaticClass()->DefaultObject);

	return Default;
}

}


