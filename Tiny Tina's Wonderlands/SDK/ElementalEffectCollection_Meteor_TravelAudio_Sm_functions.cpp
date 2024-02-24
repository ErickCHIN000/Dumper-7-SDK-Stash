#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Meteor_TravelAudio_Sm.ElementalEffectCollection_Meteor_TravelAudio_Sm_C
// (None)

class UClass* UElementalEffectCollection_Meteor_TravelAudio_Sm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Meteor_TravelAudio_Sm_C");

	return Clss;
}


// ElementalEffectCollection_Meteor_TravelAudio_Sm_C ElementalEffectCollection_Meteor_TravelAudio_Sm.Default__ElementalEffectCollection_Meteor_TravelAudio_Sm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Meteor_TravelAudio_Sm_C* UElementalEffectCollection_Meteor_TravelAudio_Sm_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Meteor_TravelAudio_Sm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Meteor_TravelAudio_Sm_C*>(UElementalEffectCollection_Meteor_TravelAudio_Sm_C::StaticClass()->DefaultObject);

	return Default;
}

}


