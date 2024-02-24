#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_ElementalHawk_RogueImp.LightProj_Spell_ElementalHawk_RogueImp_C
// (None)

class UClass* ULightProj_Spell_ElementalHawk_RogueImp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_ElementalHawk_RogueImp_C");

	return Clss;
}


// LightProj_Spell_ElementalHawk_RogueImp_C LightProj_Spell_ElementalHawk_RogueImp.Default__LightProj_Spell_ElementalHawk_RogueImp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_ElementalHawk_RogueImp_C* ULightProj_Spell_ElementalHawk_RogueImp_C::GetDefaultObj()
{
	static class ULightProj_Spell_ElementalHawk_RogueImp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_ElementalHawk_RogueImp_C*>(ULightProj_Spell_ElementalHawk_RogueImp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_ElementalHawk_RogueImp.LightProj_Spell_ElementalHawk_RogueImp_C.OnDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               bCritical                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_ElementalHawk_RogueImp_C::OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_RogueImp_C", "OnDamage");

	Params::ULightProj_Spell_ElementalHawk_RogueImp_C_OnDamage_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.bCritical = bCritical;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_ElementalHawk_RogueImp.LightProj_Spell_ElementalHawk_RogueImp_C.FindHawkHomingTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HomingTarget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_FindHawkHomingTarget_HomingTarget                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindHawkHomingTarget_Res                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTarget_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_ElementalHawk_RogueImp_C::FindHawkHomingTarget(class ULightProjectile* Projectile, class AActor** HomingTarget, bool* Res, class AActor* CallFunc_FindHawkHomingTarget_HomingTarget, bool CallFunc_FindHawkHomingTarget_Res, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_RogueImp_C", "FindHawkHomingTarget");

	Params::ULightProj_Spell_ElementalHawk_RogueImp_C_FindHawkHomingTarget_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_FindHawkHomingTarget_HomingTarget = CallFunc_FindHawkHomingTarget_HomingTarget;
	Parms.CallFunc_FindHawkHomingTarget_Res = CallFunc_FindHawkHomingTarget_Res;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetTarget_ReturnValue = CallFunc_GetTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HomingTarget != nullptr)
		*HomingTarget = Parms.HomingTarget;

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


