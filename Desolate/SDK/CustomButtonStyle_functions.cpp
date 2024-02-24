#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomButtonStyle.CustomButtonStyle_C
// (None)

class UClass* UCustomButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomButtonStyle_C");

	return Clss;
}


// CustomButtonStyle_C CustomButtonStyle.Default__CustomButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomButtonStyle_C* UCustomButtonStyle_C::GetDefaultObj()
{
	static class UCustomButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomButtonStyle_C*>(UCustomButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


