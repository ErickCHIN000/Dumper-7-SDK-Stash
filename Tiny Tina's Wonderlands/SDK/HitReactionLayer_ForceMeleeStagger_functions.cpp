#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_ForceMeleeStagger.HitReactionLayer_ForceMeleeStagger_C
// (None)

class UClass* UHitReactionLayer_ForceMeleeStagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_ForceMeleeStagger_C");

	return Clss;
}


// HitReactionLayer_ForceMeleeStagger_C HitReactionLayer_ForceMeleeStagger.Default__HitReactionLayer_ForceMeleeStagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_ForceMeleeStagger_C* UHitReactionLayer_ForceMeleeStagger_C::GetDefaultObj()
{
	static class UHitReactionLayer_ForceMeleeStagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_ForceMeleeStagger_C*>(UHitReactionLayer_ForceMeleeStagger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HitReactionLayer_ForceMeleeStagger.HitReactionLayer_ForceMeleeStagger_C.EvaluateTag
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
// class UDataTable*                  ForceTable                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IncomingForce                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValue_OutValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValue_OutValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValue_OutValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValue_OutValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)

class UHitReactionTag* UHitReactionLayer_ForceMeleeStagger_C::EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag, class UDataTable* ForceTable, float IncomingForce, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsPlayer_ReturnValue, float CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, float CallFunc_GetDataTableValue_OutValue2, bool CallFunc_GetDataTableValue_ReturnValue2, float CallFunc_GetDataTableValue_OutValue3, bool CallFunc_GetDataTableValue_ReturnValue3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitReactionLayer_ForceMeleeStagger_C", "EvaluateTag");

	Params::UHitReactionLayer_ForceMeleeStagger_C_EvaluateTag_Params Parms{};

	Parms.Receiver = Receiver;
	Parms.Causer = Causer;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.HitRegion = HitRegion;
	Parms.Force = Force;
	Parms.PreviousTag = PreviousTag;
	Parms.ForceTable = ForceTable;
	Parms.IncomingForce = IncomingForce;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsPlayer_ReturnValue = CallFunc_IsPlayer_ReturnValue;
	Parms.CallFunc_GetDataTableValue_OutValue1 = CallFunc_GetDataTableValue_OutValue1;
	Parms.CallFunc_GetDataTableValue_ReturnValue1 = CallFunc_GetDataTableValue_ReturnValue1;
	Parms.CallFunc_GetDataTableValue_OutValue2 = CallFunc_GetDataTableValue_OutValue2;
	Parms.CallFunc_GetDataTableValue_ReturnValue2 = CallFunc_GetDataTableValue_ReturnValue2;
	Parms.CallFunc_GetDataTableValue_OutValue3 = CallFunc_GetDataTableValue_OutValue3;
	Parms.CallFunc_GetDataTableValue_ReturnValue3 = CallFunc_GetDataTableValue_ReturnValue3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue1 = CallFunc_LessEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue2 = CallFunc_LessEqual_FloatFloat_ReturnValue2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue3 = CallFunc_LessEqual_FloatFloat_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


