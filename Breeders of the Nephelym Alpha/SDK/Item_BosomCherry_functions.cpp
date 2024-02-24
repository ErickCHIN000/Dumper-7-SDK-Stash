#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_BosomCherry.Item_BosomCherry_C
// (None)

class UClass* UItem_BosomCherry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_BosomCherry_C");

	return Clss;
}


// Item_BosomCherry_C Item_BosomCherry.Default__Item_BosomCherry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_BosomCherry_C* UItem_BosomCherry_C::GetDefaultObj()
{
	static class UItem_BosomCherry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_BosomCherry_C*>(UItem_BosomCherry_C::StaticClass()->DefaultObject);

	return Default;
}

}


