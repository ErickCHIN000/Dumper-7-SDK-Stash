#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReaperSex_T.ReaperSex_T_C
// (None)

class UClass* UReaperSex_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReaperSex_T_C");

	return Clss;
}


// ReaperSex_T_C ReaperSex_T.Default__ReaperSex_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReaperSex_T_C* UReaperSex_T_C::GetDefaultObj()
{
	static class UReaperSex_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReaperSex_T_C*>(UReaperSex_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


