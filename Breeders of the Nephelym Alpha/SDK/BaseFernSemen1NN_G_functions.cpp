#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseFernSemen1NN_G.BaseFernSemen1NN_G_C
// (None)

class UClass* UBaseFernSemen1NN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseFernSemen1NN_G_C");

	return Clss;
}


// BaseFernSemen1NN_G_C BaseFernSemen1NN_G.Default__BaseFernSemen1NN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseFernSemen1NN_G_C* UBaseFernSemen1NN_G_C::GetDefaultObj()
{
	static class UBaseFernSemen1NN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseFernSemen1NN_G_C*>(UBaseFernSemen1NN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


