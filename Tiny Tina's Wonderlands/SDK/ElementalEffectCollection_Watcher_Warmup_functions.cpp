#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Watcher_Warmup.ElementalEffectCollection_Watcher_Warmup_C
// (None)

class UClass* UElementalEffectCollection_Watcher_Warmup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Watcher_Warmup_C");

	return Clss;
}


// ElementalEffectCollection_Watcher_Warmup_C ElementalEffectCollection_Watcher_Warmup.Default__ElementalEffectCollection_Watcher_Warmup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Watcher_Warmup_C* UElementalEffectCollection_Watcher_Warmup_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Watcher_Warmup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Watcher_Warmup_C*>(UElementalEffectCollection_Watcher_Warmup_C::StaticClass()->DefaultObject);

	return Default;
}

}


