#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseFernMilk1NN_R.BaseFernMilk1NN_R_C
// (None)

class UClass* UBaseFernMilk1NN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseFernMilk1NN_R_C");

	return Clss;
}


// BaseFernMilk1NN_R_C BaseFernMilk1NN_R.Default__BaseFernMilk1NN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseFernMilk1NN_R_C* UBaseFernMilk1NN_R_C::GetDefaultObj()
{
	static class UBaseFernMilk1NN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseFernMilk1NN_R_C*>(UBaseFernMilk1NN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


