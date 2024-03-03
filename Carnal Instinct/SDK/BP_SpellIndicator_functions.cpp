#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpellIndicator.BP_SpellIndicator_C
// (Actor)

class UClass* ABP_SpellIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpellIndicator_C");

	return Clss;
}


// BP_SpellIndicator_C BP_SpellIndicator.Default__BP_SpellIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpellIndicator_C* ABP_SpellIndicator_C::GetDefaultObj()
{
	static class ABP_SpellIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpellIndicator_C*>(ABP_SpellIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpellIndicator.BP_SpellIndicator_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SpellIndicator_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellIndicator_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpellIndicator.BP_SpellIndicator_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SpellIndicator_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellIndicator_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpellIndicator.BP_SpellIndicator_C.SetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          NewMaterial                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpellIndicator_C::SetMaterial(class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellIndicator_C", "SetMaterial");

	Params::ABP_SpellIndicator_C_SetMaterial_Params Parms{};

	Parms.NewMaterial = NewMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellIndicator.BP_SpellIndicator_C.SetRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewRadius                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpellIndicator_C::SetRadius(float NewRadius, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellIndicator_C", "SetRadius");

	Params::ABP_SpellIndicator_C_SetRadius_Params Parms{};

	Parms.NewRadius = NewRadius;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellIndicator.BP_SpellIndicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SpellIndicator_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellIndicator_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


