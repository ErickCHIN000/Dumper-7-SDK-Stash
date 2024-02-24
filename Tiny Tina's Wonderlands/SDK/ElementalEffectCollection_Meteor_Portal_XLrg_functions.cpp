#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Meteor_Portal_XLrg.ElementalEffectCollection_Meteor_Portal_XLrg_C
// (None)

class UClass* UElementalEffectCollection_Meteor_Portal_XLrg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Meteor_Portal_XLrg_C");

	return Clss;
}


// ElementalEffectCollection_Meteor_Portal_XLrg_C ElementalEffectCollection_Meteor_Portal_XLrg.Default__ElementalEffectCollection_Meteor_Portal_XLrg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Meteor_Portal_XLrg_C* UElementalEffectCollection_Meteor_Portal_XLrg_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Meteor_Portal_XLrg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Meteor_Portal_XLrg_C*>(UElementalEffectCollection_Meteor_Portal_XLrg_C::StaticClass()->DefaultObject);

	return Default;
}

}


