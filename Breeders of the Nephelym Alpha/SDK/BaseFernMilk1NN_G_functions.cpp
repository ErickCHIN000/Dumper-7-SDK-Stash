#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseFernMilk1NN_G.BaseFernMilk1NN_G_C
// (None)

class UClass* UBaseFernMilk1NN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseFernMilk1NN_G_C");

	return Clss;
}


// BaseFernMilk1NN_G_C BaseFernMilk1NN_G.Default__BaseFernMilk1NN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseFernMilk1NN_G_C* UBaseFernMilk1NN_G_C::GetDefaultObj()
{
	static class UBaseFernMilk1NN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseFernMilk1NN_G_C*>(UBaseFernMilk1NN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


