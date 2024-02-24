#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Meteor_Small.ElementalEffectCollection_Meteor_Small_C
// (None)

class UClass* UElementalEffectCollection_Meteor_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Meteor_Small_C");

	return Clss;
}


// ElementalEffectCollection_Meteor_Small_C ElementalEffectCollection_Meteor_Small.Default__ElementalEffectCollection_Meteor_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Meteor_Small_C* UElementalEffectCollection_Meteor_Small_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Meteor_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Meteor_Small_C*>(UElementalEffectCollection_Meteor_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


