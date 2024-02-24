#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIHeaderComponent.UIHeaderComponent_C
// (None)

class UClass* UUIHeaderComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIHeaderComponent_C");

	return Clss;
}


// UIHeaderComponent_C UIHeaderComponent.Default__UIHeaderComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIHeaderComponent_C* UUIHeaderComponent_C::GetDefaultObj()
{
	static class UUIHeaderComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIHeaderComponent_C*>(UUIHeaderComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


