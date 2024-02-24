#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass an_akAudioNotify__melee_MP133_hit.an_akAudioNotify__melee_MP133_hit_C
// (None)

class UClass* UAn_akAudioNotify__melee_MP133_hit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("an_akAudioNotify__melee_MP133_hit_C");

	return Clss;
}


// an_akAudioNotify__melee_MP133_hit_C an_akAudioNotify__melee_MP133_hit.Default__an_akAudioNotify__melee_MP133_hit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAn_akAudioNotify__melee_MP133_hit_C* UAn_akAudioNotify__melee_MP133_hit_C::GetDefaultObj()
{
	static class UAn_akAudioNotify__melee_MP133_hit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAn_akAudioNotify__melee_MP133_hit_C*>(UAn_akAudioNotify__melee_MP133_hit_C::StaticClass()->DefaultObject);

	return Default;
}

}


