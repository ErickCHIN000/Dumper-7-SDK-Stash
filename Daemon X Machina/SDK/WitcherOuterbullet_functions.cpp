#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WitcherOuterbullet.WitcherOuterbullet_C
// (Actor)

class UClass* AWitcherOuterbullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WitcherOuterbullet_C");

	return Clss;
}


// WitcherOuterbullet_C WitcherOuterbullet.Default__WitcherOuterbullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWitcherOuterbullet_C* AWitcherOuterbullet_C::GetDefaultObj()
{
	static class AWitcherOuterbullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWitcherOuterbullet_C*>(AWitcherOuterbullet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WitcherOuterbullet.WitcherOuterbullet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWitcherOuterbullet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WitcherOuterbullet_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WitcherOuterbullet.WitcherOuterbullet_C.InitializeProjectileBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWitcherOuterbullet_C::InitializeProjectileBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WitcherOuterbullet_C", "InitializeProjectileBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WitcherOuterbullet.WitcherOuterbullet_C.ExecuteUbergraph_WitcherOuterbullet
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBasicStatusComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalcOuterAttackWithFluctuation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWitcherOuterbullet_C::ExecuteUbergraph_WitcherOuterbullet(int32 EntryPoint, class UTTLBasicStatusComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_CalcOuterAttackWithFluctuation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WitcherOuterbullet_C", "ExecuteUbergraph_WitcherOuterbullet");

	Params::AWitcherOuterbullet_C_ExecuteUbergraph_WitcherOuterbullet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_CalcOuterAttackWithFluctuation_ReturnValue = CallFunc_CalcOuterAttackWithFluctuation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


