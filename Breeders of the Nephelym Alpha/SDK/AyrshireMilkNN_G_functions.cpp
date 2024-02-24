#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AyrshireMilkNN_G.AyrshireMilkNN_G_C
// (None)

class UClass* UAyrshireMilkNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AyrshireMilkNN_G_C");

	return Clss;
}


// AyrshireMilkNN_G_C AyrshireMilkNN_G.Default__AyrshireMilkNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAyrshireMilkNN_G_C* UAyrshireMilkNN_G_C::GetDefaultObj()
{
	static class UAyrshireMilkNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAyrshireMilkNN_G_C*>(UAyrshireMilkNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


