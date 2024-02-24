#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_Base.HitReactionLayer_Base_C
// (None)

class UClass* UHitReactionLayer_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_Base_C");

	return Clss;
}


// HitReactionLayer_Base_C HitReactionLayer_Base.Default__HitReactionLayer_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_Base_C* UHitReactionLayer_Base_C::GetDefaultObj()
{
	static class UHitReactionLayer_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_Base_C*>(UHitReactionLayer_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


