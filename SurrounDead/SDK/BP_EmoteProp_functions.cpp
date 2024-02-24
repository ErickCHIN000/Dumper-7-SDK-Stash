#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EmoteProp.BP_EmoteProp_C
// (Actor)

class UClass* ABP_EmoteProp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EmoteProp_C");

	return Clss;
}


// BP_EmoteProp_C BP_EmoteProp.Default__BP_EmoteProp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EmoteProp_C* ABP_EmoteProp_C::GetDefaultObj()
{
	static class ABP_EmoteProp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EmoteProp_C*>(ABP_EmoteProp_C::StaticClass()->DefaultObject);

	return Default;
}

}


