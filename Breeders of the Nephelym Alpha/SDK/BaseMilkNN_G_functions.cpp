#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNN_G.BaseMilkNN_G_C
// (None)

class UClass* UBaseMilkNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNN_G_C");

	return Clss;
}


// BaseMilkNN_G_C BaseMilkNN_G.Default__BaseMilkNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNN_G_C* UBaseMilkNN_G_C::GetDefaultObj()
{
	static class UBaseMilkNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNN_G_C*>(UBaseMilkNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


