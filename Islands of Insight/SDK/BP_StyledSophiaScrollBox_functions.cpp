#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StyledSophiaScrollBox.BP_StyledSophiaScrollBox_C
// (None)

class UClass* UBP_StyledSophiaScrollBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StyledSophiaScrollBox_C");

	return Clss;
}


// BP_StyledSophiaScrollBox_C BP_StyledSophiaScrollBox.Default__BP_StyledSophiaScrollBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StyledSophiaScrollBox_C* UBP_StyledSophiaScrollBox_C::GetDefaultObj()
{
	static class UBP_StyledSophiaScrollBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StyledSophiaScrollBox_C*>(UBP_StyledSophiaScrollBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


