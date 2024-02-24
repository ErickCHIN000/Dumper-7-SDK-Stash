#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterChargeShotBullet.OuterChargeShotBullet_C
// (Actor)

class UClass* AOuterChargeShotBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterChargeShotBullet_C");

	return Clss;
}


// OuterChargeShotBullet_C OuterChargeShotBullet.Default__OuterChargeShotBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterChargeShotBullet_C* AOuterChargeShotBullet_C::GetDefaultObj()
{
	static class AOuterChargeShotBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterChargeShotBullet_C*>(AOuterChargeShotBullet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OuterChargeShotBullet.OuterChargeShotBullet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterChargeShotBullet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterChargeShotBullet_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterChargeShotBullet.OuterChargeShotBullet_C.InitializeProjectileBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterChargeShotBullet_C::InitializeProjectileBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterChargeShotBullet_C", "InitializeProjectileBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterChargeShotBullet.OuterChargeShotBullet_C.ExecuteUbergraph_OuterChargeShotBullet
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBasicStatusComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalcOuterAttackWithFluctuation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOuterChargeShotBullet_C::ExecuteUbergraph_OuterChargeShotBullet(int32 EntryPoint, class UTTLBasicStatusComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_CalcOuterAttackWithFluctuation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterChargeShotBullet_C", "ExecuteUbergraph_OuterChargeShotBullet");

	Params::AOuterChargeShotBullet_C_ExecuteUbergraph_OuterChargeShotBullet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_CalcOuterAttackWithFluctuation_ReturnValue = CallFunc_CalcOuterAttackWithFluctuation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


