#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_PS_TOR_TNT.ElementalEffectCollection_PS_TOR_TNT_C
// (None)

class UClass* UElementalEffectCollection_PS_TOR_TNT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_PS_TOR_TNT_C");

	return Clss;
}


// ElementalEffectCollection_PS_TOR_TNT_C ElementalEffectCollection_PS_TOR_TNT.Default__ElementalEffectCollection_PS_TOR_TNT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_PS_TOR_TNT_C* UElementalEffectCollection_PS_TOR_TNT_C::GetDefaultObj()
{
	static class UElementalEffectCollection_PS_TOR_TNT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_PS_TOR_TNT_C*>(UElementalEffectCollection_PS_TOR_TNT_C::StaticClass()->DefaultObject);

	return Default;
}

}


