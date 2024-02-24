#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseFernSemen2NN_G.BaseFernSemen2NN_G_C
// (None)

class UClass* UBaseFernSemen2NN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseFernSemen2NN_G_C");

	return Clss;
}


// BaseFernSemen2NN_G_C BaseFernSemen2NN_G.Default__BaseFernSemen2NN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseFernSemen2NN_G_C* UBaseFernSemen2NN_G_C::GetDefaultObj()
{
	static class UBaseFernSemen2NN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseFernSemen2NN_G_C*>(UBaseFernSemen2NN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


