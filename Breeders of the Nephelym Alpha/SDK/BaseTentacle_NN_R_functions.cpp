#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseTentacle_NN_R.BaseTentacle_NN_R_C
// (None)

class UClass* UBaseTentacle_NN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseTentacle_NN_R_C");

	return Clss;
}


// BaseTentacle_NN_R_C BaseTentacle_NN_R.Default__BaseTentacle_NN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseTentacle_NN_R_C* UBaseTentacle_NN_R_C::GetDefaultObj()
{
	static class UBaseTentacle_NN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseTentacle_NN_R_C*>(UBaseTentacle_NN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}

