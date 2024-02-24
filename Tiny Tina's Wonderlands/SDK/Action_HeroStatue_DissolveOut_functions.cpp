#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_HeroStatue_DissolveOut.Action_HeroStatue_DissolveOut_C
// (None)

class UClass* UAction_HeroStatue_DissolveOut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_HeroStatue_DissolveOut_C");

	return Clss;
}


// Action_HeroStatue_DissolveOut_C Action_HeroStatue_DissolveOut.Default__Action_HeroStatue_DissolveOut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_HeroStatue_DissolveOut_C* UAction_HeroStatue_DissolveOut_C::GetDefaultObj()
{
	static class UAction_HeroStatue_DissolveOut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_HeroStatue_DissolveOut_C*>(UAction_HeroStatue_DissolveOut_C::StaticClass()->DefaultObject);

	return Default;
}

}


