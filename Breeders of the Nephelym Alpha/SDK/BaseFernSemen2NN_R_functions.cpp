#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseFernSemen2NN_R.BaseFernSemen2NN_R_C
// (None)

class UClass* UBaseFernSemen2NN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseFernSemen2NN_R_C");

	return Clss;
}


// BaseFernSemen2NN_R_C BaseFernSemen2NN_R.Default__BaseFernSemen2NN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseFernSemen2NN_R_C* UBaseFernSemen2NN_R_C::GetDefaultObj()
{
	static class UBaseFernSemen2NN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseFernSemen2NN_R_C*>(UBaseFernSemen2NN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


