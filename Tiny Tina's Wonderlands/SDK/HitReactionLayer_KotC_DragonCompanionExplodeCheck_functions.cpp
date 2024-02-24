#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_KotC_DragonCompanionExplodeCheck.HitReactionLayer_KotC_DragonCompanionExplodeCheck_C
// (None)

class UClass* UHitReactionLayer_KotC_DragonCompanionExplodeCheck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_KotC_DragonCompanionExplodeCheck_C");

	return Clss;
}


// HitReactionLayer_KotC_DragonCompanionExplodeCheck_C HitReactionLayer_KotC_DragonCompanionExplodeCheck.Default__HitReactionLayer_KotC_DragonCompanionExplodeCheck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_KotC_DragonCompanionExplodeCheck_C* UHitReactionLayer_KotC_DragonCompanionExplodeCheck_C::GetDefaultObj()
{
	static class UHitReactionLayer_KotC_DragonCompanionExplodeCheck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_KotC_DragonCompanionExplodeCheck_C*>(UHitReactionLayer_KotC_DragonCompanionExplodeCheck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HitReactionLayer_KotC_DragonCompanionExplodeCheck.HitReactionLayer_KotC_DragonCompanionExplodeCheck_C.EvaluateTag
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
// class UDamageComponent*            HitReceiver                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADrone_KnightOfTheClaw_DragonPet_C*K2Node_DynamicCast_AsDrone_Knight_Of_the_Claw_Dragon_Pet         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UHitReactionTag* UHitReactionLayer_KotC_DragonCompanionExplodeCheck_C::EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag, class UDamageComponent* HitReceiver, class AActor* CallFunc_GetOwner_ReturnValue, class ADrone_KnightOfTheClaw_DragonPet_C* K2Node_DynamicCast_AsDrone_Knight_Of_the_Claw_Dragon_Pet, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitReactionLayer_KotC_DragonCompanionExplodeCheck_C", "EvaluateTag");

	Params::UHitReactionLayer_KotC_DragonCompanionExplodeCheck_C_EvaluateTag_Params Parms{};

	Parms.Receiver = Receiver;
	Parms.Causer = Causer;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.HitRegion = HitRegion;
	Parms.Force = Force;
	Parms.PreviousTag = PreviousTag;
	Parms.HitReceiver = HitReceiver;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsDrone_Knight_Of_the_Claw_Dragon_Pet = K2Node_DynamicCast_AsDrone_Knight_Of_the_Claw_Dragon_Pet;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


