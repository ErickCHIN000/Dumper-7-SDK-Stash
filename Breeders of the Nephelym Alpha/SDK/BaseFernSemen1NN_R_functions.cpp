#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseFernSemen1NN_R.BaseFernSemen1NN_R_C
// (None)

class UClass* UBaseFernSemen1NN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseFernSemen1NN_R_C");

	return Clss;
}


// BaseFernSemen1NN_R_C BaseFernSemen1NN_R.Default__BaseFernSemen1NN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseFernSemen1NN_R_C* UBaseFernSemen1NN_R_C::GetDefaultObj()
{
	static class UBaseFernSemen1NN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseFernSemen1NN_R_C*>(UBaseFernSemen1NN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


