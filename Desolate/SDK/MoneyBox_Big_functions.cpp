#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoneyBox_Big.MoneyBox_Big_C
// (Actor)

class UClass* AMoneyBox_Big_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoneyBox_Big_C");

	return Clss;
}


// MoneyBox_Big_C MoneyBox_Big.Default__MoneyBox_Big_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMoneyBox_Big_C* AMoneyBox_Big_C::GetDefaultObj()
{
	static class AMoneyBox_Big_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoneyBox_Big_C*>(AMoneyBox_Big_C::StaticClass()->DefaultObject);

	return Default;
}

}


