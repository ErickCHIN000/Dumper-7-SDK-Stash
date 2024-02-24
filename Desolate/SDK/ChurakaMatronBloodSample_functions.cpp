#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChurakaMatronBloodSample.ChurakaMatronBloodSample_C
// (Actor)

class UClass* AChurakaMatronBloodSample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChurakaMatronBloodSample_C");

	return Clss;
}


// ChurakaMatronBloodSample_C ChurakaMatronBloodSample.Default__ChurakaMatronBloodSample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChurakaMatronBloodSample_C* AChurakaMatronBloodSample_C::GetDefaultObj()
{
	static class AChurakaMatronBloodSample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChurakaMatronBloodSample_C*>(AChurakaMatronBloodSample_C::StaticClass()->DefaultObject);

	return Default;
}

}


