#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GameplayChat.GameplayChat_C
// (None)

class UClass* UGameplayChat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayChat_C");

	return Clss;
}


// GameplayChat_C GameplayChat.Default__GameplayChat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameplayChat_C* UGameplayChat_C::GetDefaultObj()
{
	static class UGameplayChat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayChat_C*>(UGameplayChat_C::StaticClass()->DefaultObject);

	return Default;
}

}


