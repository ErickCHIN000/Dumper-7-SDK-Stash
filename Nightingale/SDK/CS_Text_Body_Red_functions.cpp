#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Text_Body_Red.CS_Text_Body_Red_C
// (None)

class UClass* UCS_Text_Body_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Text_Body_Red_C");

	return Clss;
}


// CS_Text_Body_Red_C CS_Text_Body_Red.Default__CS_Text_Body_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Text_Body_Red_C* UCS_Text_Body_Red_C::GetDefaultObj()
{
	static class UCS_Text_Body_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Text_Body_Red_C*>(UCS_Text_Body_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


