#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SquareProgressBar.SquareProgressBar_C
// (None)

class UClass* USquareProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SquareProgressBar_C");

	return Clss;
}


// SquareProgressBar_C SquareProgressBar.Default__SquareProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USquareProgressBar_C* USquareProgressBar_C::GetDefaultObj()
{
	static class USquareProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USquareProgressBar_C*>(USquareProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SquareProgressBar.SquareProgressBar_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USquareProgressBar_C::SetPercent(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SquareProgressBar_C", "SetPercent");

	Params::USquareProgressBar_C_SetPercent_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


