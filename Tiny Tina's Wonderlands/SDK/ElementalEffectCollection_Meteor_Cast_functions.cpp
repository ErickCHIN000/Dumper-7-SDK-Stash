#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Meteor_Cast.ElementalEffectCollection_Meteor_Cast_C
// (None)

class UClass* UElementalEffectCollection_Meteor_Cast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Meteor_Cast_C");

	return Clss;
}


// ElementalEffectCollection_Meteor_Cast_C ElementalEffectCollection_Meteor_Cast.Default__ElementalEffectCollection_Meteor_Cast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Meteor_Cast_C* UElementalEffectCollection_Meteor_Cast_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Meteor_Cast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Meteor_Cast_C*>(UElementalEffectCollection_Meteor_Cast_C::StaticClass()->DefaultObject);

	return Default;
}

}

