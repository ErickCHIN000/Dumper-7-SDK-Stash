#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Watcher_Start.ElementalEffectCollection_Watcher_Start_C
// (None)

class UClass* UElementalEffectCollection_Watcher_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Watcher_Start_C");

	return Clss;
}


// ElementalEffectCollection_Watcher_Start_C ElementalEffectCollection_Watcher_Start.Default__ElementalEffectCollection_Watcher_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Watcher_Start_C* UElementalEffectCollection_Watcher_Start_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Watcher_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Watcher_Start_C*>(UElementalEffectCollection_Watcher_Start_C::StaticClass()->DefaultObject);

	return Default;
}

}


