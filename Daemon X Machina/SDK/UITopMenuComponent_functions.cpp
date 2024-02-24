#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UITopMenuComponent.UITopMenuComponent_C
// (None)

class UClass* UUITopMenuComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITopMenuComponent_C");

	return Clss;
}


// UITopMenuComponent_C UITopMenuComponent.Default__UITopMenuComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITopMenuComponent_C* UUITopMenuComponent_C::GetDefaultObj()
{
	static class UUITopMenuComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITopMenuComponent_C*>(UUITopMenuComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


