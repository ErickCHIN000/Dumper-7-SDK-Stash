#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_DeathBySquish.HitReactionLayer_DeathBySquish_C
// (None)

class UClass* UHitReactionLayer_DeathBySquish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_DeathBySquish_C");

	return Clss;
}


// HitReactionLayer_DeathBySquish_C HitReactionLayer_DeathBySquish.Default__HitReactionLayer_DeathBySquish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_DeathBySquish_C* UHitReactionLayer_DeathBySquish_C::GetDefaultObj()
{
	static class UHitReactionLayer_DeathBySquish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_DeathBySquish_C*>(UHitReactionLayer_DeathBySquish_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HitReactionLayer_DeathBySquish.HitReactionLayer_DeathBySquish_C.EvaluateTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDamageComponent*            Receiver                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      Causer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHitRegionData*              HitRegion                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHitReactionTag*             PreviousTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHitReactionTag*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

class UHitReactionTag* UHitReactionLayer_DeathBySquish_C::EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitReactionLayer_DeathBySquish_C", "EvaluateTag");

	Params::UHitReactionLayer_DeathBySquish_C_EvaluateTag_Params Parms{};

	Parms.Receiver = Receiver;
	Parms.Causer = Causer;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.HitRegion = HitRegion;
	Parms.Force = Force;
	Parms.PreviousTag = PreviousTag;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue1 = CallFunc_ClassIsChildOf_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


