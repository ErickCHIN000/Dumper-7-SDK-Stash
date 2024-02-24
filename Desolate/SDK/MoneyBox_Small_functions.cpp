#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoneyBox_Small.MoneyBox_Small_C
// (Actor)

class UClass* AMoneyBox_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoneyBox_Small_C");

	return Clss;
}


// MoneyBox_Small_C MoneyBox_Small.Default__MoneyBox_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMoneyBox_Small_C* AMoneyBox_Small_C::GetDefaultObj()
{
	static class AMoneyBox_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoneyBox_Small_C*>(AMoneyBox_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


