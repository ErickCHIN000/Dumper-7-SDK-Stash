#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Button_Category.CS_Button_Category_C
// (None)

class UClass* UCS_Button_Category_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Button_Category_C");

	return Clss;
}


// CS_Button_Category_C CS_Button_Category.Default__CS_Button_Category_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Button_Category_C* UCS_Button_Category_C::GetDefaultObj()
{
	static class UCS_Button_Category_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Button_Category_C*>(UCS_Button_Category_C::StaticClass()->DefaultObject);

	return Default;
}

}


