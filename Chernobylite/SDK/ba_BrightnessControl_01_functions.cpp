#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_BrightnessControl_01.ba_BrightnessControl_01_C
// (Actor)

class UClass* Aba_BrightnessControl_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_BrightnessControl_01_C");

	return Clss;
}


// ba_BrightnessControl_01_C ba_BrightnessControl_01.Default__ba_BrightnessControl_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_BrightnessControl_01_C* Aba_BrightnessControl_01_C::GetDefaultObj()
{
	static class Aba_BrightnessControl_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_BrightnessControl_01_C*>(Aba_BrightnessControl_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_BrightnessControl_01.ba_BrightnessControl_01_C.ModifiAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Modificator                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_BrightnessControl_01_C::ModifiAlpha(float Modificator, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BrightnessControl_01_C", "ModifiAlpha");

	Params::Aba_BrightnessControl_01_C_ModifiAlpha_Params Parms{};

	Parms.Modificator = Modificator;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_BrightnessControl_01.ba_BrightnessControl_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_BrightnessControl_01_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BrightnessControl_01_C", "UserConstructionScript");

	Params::Aba_BrightnessControl_01_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


