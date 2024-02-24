#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass an_akAudioNotify_Load_MP133.an_akAudioNotify_Load_MP133_C
// (None)

class UClass* UAn_akAudioNotify_Load_MP133_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("an_akAudioNotify_Load_MP133_C");

	return Clss;
}


// an_akAudioNotify_Load_MP133_C an_akAudioNotify_Load_MP133.Default__an_akAudioNotify_Load_MP133_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAn_akAudioNotify_Load_MP133_C* UAn_akAudioNotify_Load_MP133_C::GetDefaultObj()
{
	static class UAn_akAudioNotify_Load_MP133_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAn_akAudioNotify_Load_MP133_C*>(UAn_akAudioNotify_Load_MP133_C::StaticClass()->DefaultObject);

	return Default;
}

}


