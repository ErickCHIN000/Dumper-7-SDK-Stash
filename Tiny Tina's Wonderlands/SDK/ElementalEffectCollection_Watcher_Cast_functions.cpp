#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Watcher_Cast.ElementalEffectCollection_Watcher_Cast_C
// (None)

class UClass* UElementalEffectCollection_Watcher_Cast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Watcher_Cast_C");

	return Clss;
}


// ElementalEffectCollection_Watcher_Cast_C ElementalEffectCollection_Watcher_Cast.Default__ElementalEffectCollection_Watcher_Cast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Watcher_Cast_C* UElementalEffectCollection_Watcher_Cast_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Watcher_Cast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Watcher_Cast_C*>(UElementalEffectCollection_Watcher_Cast_C::StaticClass()->DefaultObject);

	return Default;
}

}


