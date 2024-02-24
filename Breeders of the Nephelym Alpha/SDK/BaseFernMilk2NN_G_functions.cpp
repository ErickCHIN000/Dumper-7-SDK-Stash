#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseFernMilk2NN_G.BaseFernMilk2NN_G_C
// (None)

class UClass* UBaseFernMilk2NN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseFernMilk2NN_G_C");

	return Clss;
}


// BaseFernMilk2NN_G_C BaseFernMilk2NN_G.Default__BaseFernMilk2NN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseFernMilk2NN_G_C* UBaseFernMilk2NN_G_C::GetDefaultObj()
{
	static class UBaseFernMilk2NN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseFernMilk2NN_G_C*>(UBaseFernMilk2NN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


