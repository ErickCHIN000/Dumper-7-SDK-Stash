#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterBullet.OuterBullet_C
// (Actor)

class UClass* AOuterBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterBullet_C");

	return Clss;
}


// OuterBullet_C OuterBullet.Default__OuterBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterBullet_C* AOuterBullet_C::GetDefaultObj()
{
	static class AOuterBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterBullet_C*>(AOuterBullet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OuterBullet.OuterBullet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterBullet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterBullet_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterBullet.OuterBullet_C.InitializeProjectileBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterBullet_C::InitializeProjectileBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterBullet_C", "InitializeProjectileBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterBullet.OuterBullet_C.ExecuteUbergraph_OuterBullet
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBasicStatusComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalcOuterAttackWithFluctuation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOuterBullet_C::ExecuteUbergraph_OuterBullet(int32 EntryPoint, class UTTLBasicStatusComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_CalcOuterAttackWithFluctuation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterBullet_C", "ExecuteUbergraph_OuterBullet");

	Params::AOuterBullet_C_ExecuteUbergraph_OuterBullet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_CalcOuterAttackWithFluctuation_ReturnValue = CallFunc_CalcOuterAttackWithFluctuation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


