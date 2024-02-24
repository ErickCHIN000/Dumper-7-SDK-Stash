#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_Priority.HitReactionLayer_Priority_C
// (None)

class UClass* UHitReactionLayer_Priority_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_Priority_C");

	return Clss;
}


// HitReactionLayer_Priority_C HitReactionLayer_Priority.Default__HitReactionLayer_Priority_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_Priority_C* UHitReactionLayer_Priority_C::GetDefaultObj()
{
	static class UHitReactionLayer_Priority_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_Priority_C*>(UHitReactionLayer_Priority_C::StaticClass()->DefaultObject);

	return Default;
}

}


