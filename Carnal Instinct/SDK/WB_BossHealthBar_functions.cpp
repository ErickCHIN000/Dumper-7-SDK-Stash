#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_BossHealthBar.WB_BossHealthBar_C
// (None)

class UClass* UWB_BossHealthBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_BossHealthBar_C");

	return Clss;
}


// WB_BossHealthBar_C WB_BossHealthBar.Default__WB_BossHealthBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_BossHealthBar_C* UWB_BossHealthBar_C::GetDefaultObj()
{
	static class UWB_BossHealthBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_BossHealthBar_C*>(UWB_BossHealthBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


