#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Meteor_TravelAudio_Lg.ElementalEffectCollection_Meteor_TravelAudio_Lg_C
// (None)

class UClass* UElementalEffectCollection_Meteor_TravelAudio_Lg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Meteor_TravelAudio_Lg_C");

	return Clss;
}


// ElementalEffectCollection_Meteor_TravelAudio_Lg_C ElementalEffectCollection_Meteor_TravelAudio_Lg.Default__ElementalEffectCollection_Meteor_TravelAudio_Lg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Meteor_TravelAudio_Lg_C* UElementalEffectCollection_Meteor_TravelAudio_Lg_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Meteor_TravelAudio_Lg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Meteor_TravelAudio_Lg_C*>(UElementalEffectCollection_Meteor_TravelAudio_Lg_C::StaticClass()->DefaultObject);

	return Default;
}

}


