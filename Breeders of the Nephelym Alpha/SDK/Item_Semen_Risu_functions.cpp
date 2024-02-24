#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_Semen_Risu.Item_Semen_Risu_C
// (None)

class UClass* UItem_Semen_Risu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Semen_Risu_C");

	return Clss;
}


// Item_Semen_Risu_C Item_Semen_Risu.Default__Item_Semen_Risu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_Semen_Risu_C* UItem_Semen_Risu_C::GetDefaultObj()
{
	static class UItem_Semen_Risu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Semen_Risu_C*>(UItem_Semen_Risu_C::StaticClass()->DefaultObject);

	return Default;
}

}


