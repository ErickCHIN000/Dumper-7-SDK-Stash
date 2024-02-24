#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterInArsenalCharacter.OuterInArsenalCharacter_C
// (Actor)

class UClass* AOuterInArsenalCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterInArsenalCharacter_C");

	return Clss;
}


// OuterInArsenalCharacter_C OuterInArsenalCharacter.Default__OuterInArsenalCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterInArsenalCharacter_C* AOuterInArsenalCharacter_C::GetDefaultObj()
{
	static class AOuterInArsenalCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterInArsenalCharacter_C*>(AOuterInArsenalCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OuterInArsenalCharacter.OuterInArsenalCharacter_C.SetHumanCustomPartsInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterInArsenalCharacter_C::SetHumanCustomPartsInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterInArsenalCharacter_C", "SetHumanCustomPartsInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterInArsenalCharacter.OuterInArsenalCharacter_C.AttachIndependentParts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AOuterInArsenalCharacter_C::AttachIndependentParts(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue1, bool CallFunc_K2_AttachToComponent_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterInArsenalCharacter_C", "AttachIndependentParts");

	Params::AOuterInArsenalCharacter_C_AttachIndependentParts_Params Parms{};

	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue1 = CallFunc_K2_AttachToComponent_ReturnValue1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue2 = CallFunc_K2_AttachToComponent_ReturnValue2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OuterInArsenalCharacter.OuterInArsenalCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterInArsenalCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterInArsenalCharacter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterInArsenalCharacter.OuterInArsenalCharacter_C.InitializeBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterInArsenalCharacter_C::InitializeBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterInArsenalCharacter_C", "InitializeBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterInArsenalCharacter.OuterInArsenalCharacter_C.ExecuteUbergraph_OuterInArsenalCharacter
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AOuterInArsenalCharacter_C::ExecuteUbergraph_OuterInArsenalCharacter(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterInArsenalCharacter_C", "ExecuteUbergraph_OuterInArsenalCharacter");

	Params::AOuterInArsenalCharacter_C_ExecuteUbergraph_OuterInArsenalCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


